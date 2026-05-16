#include<stdio.h>
#include<math.h>
float a,b,c,d;
int main()
{
	printf("Enter values of a,b,c to solve quadratic equation,\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
		printf("Roots are same and real are %0.1f and %0.1f",-b/2*a,-b/2*a);
	else if(d>0)
		printf("Roots are real and different are %0.1f and %0.1f",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
	else
		printf("Roots are composite and different are -%0.1f + sqrt(%0.1f) / %0.1f and -%0.1f - sqrt(%0.1f) / %0.1f  \n",b,d,2*a,b,d,2*a);
	return 0;
}

