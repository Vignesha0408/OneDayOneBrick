#include <stdio.h>

int main() {
    int n=32767;
    // while(n++)
    // {
    //     printf("abc");
    // }
    n++;
    printf("%d",n);//must print -32768
    return 0;
}

//the max value of n? 32767 in turbo cpp