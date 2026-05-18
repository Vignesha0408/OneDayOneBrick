//It shows warning
#include <stdio.h>

int main() {
    int j=5,k=10;
    switch(j>k)
    {
        case 1:printf("%d is great",j);break;
        case 0:printf("%d is great",k);break;
        default :printf("Good");break;
    }
    return 0;
}