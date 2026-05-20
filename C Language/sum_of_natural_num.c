#include <stdio.h>

int main() {

    int n=3,sum=0;
    while(n!=0)
        sum=sum+n--;
    printf("%d",sum);
    return 0;
} 
//w/o loop do sum=n(n+1)/2