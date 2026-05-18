// Write a C program using switch statement to display the grade of a student based on marks according to the following ranges:

// 61–70 → Grade D
// 71–80 → Grade C
// 81–90 → Grade B
// 91–100 → Grade A
// Otherwise → Invalid / Fail

#include <stdio.h>

int main()
{
    int n=90;

    if(n%10==0)
        n--;

    switch(n/10)
    {
        case 6: printf("D"); break;
        case 7: printf("C"); break;
        case 8: printf("B"); break;
        case 9:
        case 10: printf("A"); break;

        default: printf("Invalid");
    }

    return 0;
}