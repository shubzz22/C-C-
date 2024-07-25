#include<stdio.h>
float Price(float,char);
void main()
{
	float price;
	 price=5000;
	char choice='2';
int res=	Price(price,choice);
printf("discount on price is %d",res);
}

float	Price(float price,char choice)
	{
		float discount;
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
	return discount;
	
	}