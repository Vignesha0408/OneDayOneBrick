#include <stdio.h>

int main() {
    for(int i=1;i<51;i++)
        if(i==25)continue;
    else
        printf("%d ",i);
    return 0;
}