#include <stdio.h>

int main() {
    int n1=221,n2=20,n3=33,n4=550;
    if(n1>n2)
    {
        if(n1>n3)
            {if(n1>n4)
                printf("n1 great");
                else
                printf("n4 is great");
            }
        else
            {
                if(n3>n4)
                printf("n3 great");
                else
                printf("n4 is great");
            }
    }
    else
    {
        if(n2>n3)
            {
                if(n2>n4)
                printf("n2 great");
                else
                printf("n4 is great");
            }
        else
            {
                if(n3>n4)
                printf("n3 great");
                else
                printf("n4 is great");
            }
    }


    return 0;
} 