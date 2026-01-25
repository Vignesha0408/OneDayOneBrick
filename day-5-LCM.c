#include<stdio.h>
int main()
{
	int n1=5,n2=2;
	int max=(n1>n2)?n1:n2;
	while(true){
		if(max%n1==0 && max%n2==0)
			return printf("%d",max);
		max=max+1;
	}
	
}