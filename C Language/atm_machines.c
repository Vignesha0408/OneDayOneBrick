#include<stdio.h>
int balance=0,pin=8277,oldpin,ch;

void deposite()
{
	int dep;
	printf("Enter the amount to deposite:");
	scanf("%d",&dep);
	balance=balance+dep;
	printf("$%d is deposited, now your balance is $%d\n***********\n\n",dep,balance);
	
}
void withdraw()
{
	int amt;
	printf("Enter the withdraw amount...");
	scanf("%d",&amt);
	if (amt<balance)
		{balance=balance-amt;
		printf("$%d is withdrawn, now your balance is $%d\n***********\n\n",amt,balance);

		}
	else
		printf("Not enough balance you have..");
}



void Pin_change()
{
	printf("************\n\nEnter new pin:");
	scanf("%d",&pin);
	printf("pin changed..");
}

int main()
{
	
	printf("Default pin: 8277 \n");
	int key;
	printf("Enter pin:");scanf("%d",&key);
	if(pin == key)
	{
		ch=5;
	while(ch!=0)
	{
	printf("\n1.Deposite");
	printf("\n2.Withdraw");
	printf("\n3.Balance check.");
	printf("\n4.Pin change");
	printf("\n\n Choose:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:deposite(); break;
		case 2:withdraw(); break;
		case 3:printf("Your balance: $%d ",balance); break;
		case 4:Pin_change(); break;
	}
	
	}
	}
	else
		printf("sorry .. Wrong pin ...\n\n try again bye.");
	
	return 0;
}