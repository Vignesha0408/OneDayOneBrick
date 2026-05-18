//Very very interesting
#include <stdio.h>

int main() {
    int n1=221,n2=2000,n3=33,n4=550,n5=50000;
    if(n1>n2)
    {
        if(n1>n3)
            {
                if(n1>n4)
                    {
                    if(n1>n5)
                        printf("n1 great");
                    else
                        printf("n5 is great");
                    }
                else
                    {
                        if(n4>n5)
                            printf("n4 is great");
                        else
                            printf("n5 is great");
                    }
            }
        else
            {
                if(n3>n4)
                    {if(n3>n5)
                        printf("n3 great");
                    else
                        printf("n5 is great");
                    }
                else
                    {if(n4>n5)
                        printf("n4 is great");
                    else
                            printf("n5 is great");
                    }
            }
    }
    else
    {
        if(n2>n3)
            {
                if(n2>n4)
                    {
                    if(n2>n5)
                        printf("n2 great");
                    else
                        printf("n5 is great");
                    }
                else
                    {
                    if(n4>n5)
                        printf("n4 is great");
                    else
                        printf("n5 is great");
                    }
            }
        else
            {
                if(n3>n4)
                    {
                    if(n3>n5)
                        printf("n3 great");
                    else
                        printf("n5 is great");
                    }
                else
                    {
                    if(n4>n5)
                        printf("n4 is great");
                    else
                        printf("n5 is great");
                    }
            }
    }


    return 0;
} 