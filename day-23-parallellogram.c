#include <stdio.h>

int main() {
    printf("\n");
    int n=5,sp=5;
    for(int k=0;k<sp;k++)
        printf("  ");
    sp++;

    for(int i=0;i<n;i++)
    {

    for(int j=0;j<n;j++)
            printf(" * ");
    printf("\n");
    for(int k=0;k<sp;k++)
        printf("  ");
    sp++;

    }


    return 0;
}

/*
           *  *  *  *  * 
             *  *  *  *  *
               *  *  *  *  *
                 *  *  *  *  *
                   *  *  *  *  *

*/