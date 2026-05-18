#include <stdio.h>

int main() {
    int n=11,i;
    for(n=0;n<=500;n++)
    {
        for(i=2;i<=n/2;i++)
            if(n%i==0)
                break;
        if(i== n/2+1)
            printf("%d ",n);
    }
    return 0;
}