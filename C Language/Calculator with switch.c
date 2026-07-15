#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int a,b,ch; 
while(1) 
{ 
printf("\n 1Addition\n 2Subtraction \n 3Multiplication"); 
printf("\n 4Division\n 5Modulus \n 6Exit \n"); 

printf("Enter your choice : "); 
scanf("%d",&ch);
if(ch==6)
{exit(0);
}
printf("Enter the value of a and b : "); 
scanf("%d%d",&a,&b); 

switch(ch) 
{ 
case 1: 
printf("Sum = %d\n",a+b);
 break; 
case 2: 
printf("Difference = %d\n",a-b); 
break; 
case 3:
 printf("Product = %d\n",a*b);
 break; 
case 4:
 printf("Division = %d\n",a/b); 
break; 
case 5: 
printf("Modulus= %d\n",a%b); 
break; 
case 6:
exit(0); 
default: 
printf("Enter a valid choice\n"); 
break; 
} 
} 
}