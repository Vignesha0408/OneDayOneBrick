#include <stdio.h>
bool isprime(int n)
{
	for(int i=2;i<n;i++)
		if(n%i == 0)
			return false;
		return true;
}
void  main() {  
    for(int i=2;i<=10;i++)
		if(isprime(i))
			printf("%d ",i);
}
