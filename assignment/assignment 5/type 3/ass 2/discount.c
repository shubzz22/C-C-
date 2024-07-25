#include<stdio.h>
void main()
{
	int price;
	price=5000;
	char choice='1';
	
	Price(price,choice);
}
void Price(int price,char choice)
{
int discount=0;
	if(choice=='1')
	{
		if(price>500)
		{
			discount=price*20/100;
		}
		else
		{
			discount=price*10/100;
		}
		
	}
	else if(choice=='2')
	{
		if(price>600)
		{
			discount=price*15/100;
		}
		else
		{
			discount=price;
		}
	}
	else
	{
		printf("invalid input \n");
	}
	printf("discount is %d \n",discount);
	
}
