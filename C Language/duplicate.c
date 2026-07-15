#include<stdio.h>
int i,j,a[5];
void main()
{
   printf("Enter:");
   for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
          if(a[i]==a[j])
            {printf(" %d",a[j]);
            break;
            }
}