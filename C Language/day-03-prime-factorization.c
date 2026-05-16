#include<stdio.h>
void main()
{
	
	printf("Enter number:");int n;
	scanf("%d",&n);
	int a[n],ref=n;;
	for(int i=2;i<=n;i++) 
		a[i]=0;
	
	
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			a[i]=a[i]+1;
			n=n/i;
		}
	}
	
	for(int i=2;i<=ref;i++) 
		if(a[i]!=0)
		printf("%d^%d ",i,a[i]);
	
}
