// WAP to i/p marks of student of 3 subject ,
// pass if passed in 3 subject if any 2 then
//  compartment else fail
#include <stdio.h>

int main() {
    int m1=94,m2=95,m3=94;
    if(m1>=50)
    {
        if(m2>=50)
            {
                if(m3>=50)
                    printf("passed");
                else
                    printf("compartment");
            }
        else
        {
            if(m3>=50)
                    printf("Compartment");
            else
                    printf("Fail");
        }
    }
    else
    {
        if(m2>=50)
            {
                if(m3>=50)
                    printf("Compartment");
                else
                    printf("Fail");
            }
        else
        {
            if(m3>=50)
                    printf("Fail");
            else
                    printf("Fail");
        }
    }

    return 0;
}