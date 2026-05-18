#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch='v';

    if(isalpha(ch))
        printf("Alphabet");
    else if(isdigit(ch))
        printf("Digit");
    else
        printf("Special character");

    return 0;
}