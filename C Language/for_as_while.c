#include <stdio.h>

int main() {
    int i=1;
    for(;i<=10;)//==while(i<=10)
    {
        printf("%3.2d\n",i++);
    }
    return 0;
}
//is inf loop