#include<stdio.h>
#include<math.h>
int main()
{
    int n=2000;
    int count=2;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            if(i==n/i)
                count++;
            else
                count+=2;
    printf("%d",count);
    return 0;
}