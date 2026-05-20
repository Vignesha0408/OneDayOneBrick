#include <stdio.h>

int main() {

    int n=10,sum=0;
    while(n!=0)
    {
        if(n%2!=0)
            sum=sum+n;
        n--;
    }
    printf("%d",sum);
    return 0;
} 
//9+7+5+3+1=25