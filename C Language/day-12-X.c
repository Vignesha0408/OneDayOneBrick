#include<stdio.h>
void main()
{
    for(int i=0;i<6;i++)
    {for(int j=0;j<6;j++)
        if(i+j==5||i==j)
         printf("*");
       else
           printf(" ");
    printf("\n");
    }

}
/*
*    *
 *  *
  **
  **
 *  *
*    *
*/