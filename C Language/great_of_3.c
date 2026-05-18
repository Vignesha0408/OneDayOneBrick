#include <stdio.h>

int main() {
    int n1=221,n2=20,n3=33;
    if(n1>n2)
    {
        if(n1>n3)
            printf("n1 is great");
        else
            printf("n3 is great");
    }
    else
    {
        if(n2>n3)
            printf("n2 is great");
        else
            printf("n3 is great");
    }
    return 0;
}