#include <stdio.h>
int main() 
{

    char s1[]="aabbcdef";
    char s2[]={'a','s','d'};
    for(int i=0;s2[i]!='\0';i++)
        if(s2[i]=='z')
           return printf("True");;
     printf("False");
}