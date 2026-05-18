#include <stdio.h>
void  main() {  
    int n=17,i;
    for(i=2;i<=n/2;i++)
		if(n%i == 0)
            break;
	if(i==n/2+1)
        printf("is prime");	
}