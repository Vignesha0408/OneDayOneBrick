#include <stdio.h>

int main() {

    char s1[]="aabbcdef";
    for(int i=0;s1[i]!='\0';i++)
        if(s1[i]=='c')
            return 1;
    return 0;
}