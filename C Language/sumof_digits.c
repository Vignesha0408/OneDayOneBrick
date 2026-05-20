#include <stdio.h>

int main() {
    int n=22335,sum=0,ld;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}