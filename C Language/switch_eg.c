#include <stdio.h>

int main()
{
    int n=2;

    switch(n)
    {
        case 1: printf("One"); break;
        printf("hello");
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        default: printf("Invalid");
    }

    return 0;
}