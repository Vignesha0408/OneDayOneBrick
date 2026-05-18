#include <stdio.h>

int main()
{
    char n='a';

    switch(n)
    {
        case 'a'||'e'||'i'||'o'||'u': //== case 1
            printf("Vowel");
            break;

        default:
            printf("Not vowel");
    }

    return 0;
}