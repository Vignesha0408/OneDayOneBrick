#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5},Xly=1,sum=0,min=a[0],max=a[0],even=0,odd=0;;
	printf("Array:");
	for(int i=0;i<5;i++)
	{ 
		printf("%d ",a[i]);
		sum=sum+a[i];
		Xly=Xly*a[i];
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
		if(a[i]%2==0)
			even++;else odd++;
	}
	printf("\nSum of arrays=%d.\n",sum);
	printf("Xly of arrays=%d.\n",Xly);
	printf("Reverse =");
	int size=sizeof(a)/sizeof(a[0]);
	for(int i=size-1;i>=0;i--)
		printf("%d ",a[i]);
	
	printf("\nMinimum=%d.\n",min);
	printf("Maximum=%d.\nEven count=%d,Odd Count=%d.\nfind second largest\n",max,even,odd);
		printf("\nMerging array, split array, \n");

}