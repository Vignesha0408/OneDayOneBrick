#include <stdio.h>

int main() {
    int a[10], n, i;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    
        printf("Array size exceeds limit.\n");
        

    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        a[i] = i; 
        printf("%d ", a[i]);
    }

    int x;
    printf("\n\nEnter search element: ");
    scanf("%d", &x);

    int found = 0;
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("\nElement found\n");
    else
        printf("\nElement not found\n");

    return 0;
}
