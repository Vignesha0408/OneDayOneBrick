#include <stdio.h>

int main() {
    int x=5,y=10,z=15;
    switch(x>y)
    {
        case 1: 
        switch(x>z){
            case 1:printf("x is great");
            case 0:printf("z is great");
        }
        case 0:switch(y>z)
        {
            case 1:printf("y is great");
            case 0:printf("z is great");
        }
    }
    return 0;
}
//very beautiful