//this contain error
#include <stdio.h>

int main()
{
    char n='a';

    switch(n)
    {
        case 'a':printf("Vowel");
            break;
        case 97:
            printf("Vowel");
            break;

        default:
            printf("Not vowel");
    }

    return 0;
}