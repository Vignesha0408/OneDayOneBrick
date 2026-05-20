#include <stdio.h>

int main() {
    int n=5,res=1;
    while(n!=1){
        res=res*n;
        n--;
    }
    printf("%d",res);
    return 0;
}