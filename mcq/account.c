#include<stdio.h>
void main()
{
	int balance;
	printf("balance is :");
	scanf("%d",&balance);
	printf("enter your choice:\n");
	printf("1.diposit money\n2.withdraw money\n3.display money\n");
	int choice;
	scanf("%d",&choice);
	if(choice==1){
	
	deposit(balance);
	}
	else if (choice==2)
	{
	withdraw(balance);
}

}
     void deposit(int balance)
	{
		
			int amount;
			printf("enter amount to deposit\n");
			scanf("%d\n",&amount);
		    balance=balance+amount;
			printf("total balance is %d",balance);
		}
	
	withdraw(int balance)
	{
		if(balance<3000){
		
		printf("cannot withraw money balance is not sufficient");
	}
		else if(balance>3000)
		{
			printf("enter amount to withdraw\n");
			int amount;
			scanf("%d",amount);
		int withdraw =balance-amount;
		printf("balance after withraw is %d",withdraw);
	}
		
	}
	
	