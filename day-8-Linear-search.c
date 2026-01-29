#include<stdio.h>
#include<stdlib.h>
int Linearsearch(int a[],int length)
{int ele ;
    printf(" Enter search element");
    scanf("%d",&ele);
    for(int i=0;i<length;i++)
        if(a[i]==ele)
           return printf("Element is found in array.");
       return printf("Element is not found in array.");
         
}
int main()
{
    int a[100];
    printf("Array elements=");
    for(int i=0;i<100;i++)
        printf(" %d",a[i]=rand()%1000+1);

    
    Linearsearch(a,100);
    return 0;
}