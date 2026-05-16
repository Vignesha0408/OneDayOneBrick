#include <stdio.h>

int main() {
    int n=6;

    for(int i=0;i<=n;i++)
    {
    for(int j=0;j<=n;j++)
    if(i>=j&&i+j>=n)
        printf(" * ");
    else
        printf("   ");
    printf("\n");
    }

    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    if(i+j<n&&j>i)
        printf(" * ");
    else
        printf("   ");
    printf("\n");
    }

    return 0;
}



/*

          *
       *  *  *
    *  *  *  *  *
 *  *  *  *  *  *  *
    *  *  *  *  *
       *  *  *
          *


          
*/