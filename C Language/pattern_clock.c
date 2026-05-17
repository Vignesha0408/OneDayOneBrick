// ****
//  ***
//   **
//    *
//   **
//  ***
// ****


#include <stdio.h>
int main() {
    for(int l=1;l<=7;l++)
    {
        if(l<=4)
        {
            for(int s=2;s<=l;s++)
                printf(" ");
            for(int c=4;c>= l;c--)
                printf("*");
            printf("\n");
        }
        else
        {
            for(int s=6;s>=l;s--)
                printf(" ");
            for(int c=4;c<=l;c++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}