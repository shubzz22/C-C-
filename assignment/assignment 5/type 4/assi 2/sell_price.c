#include<stdio.h>
int sell(float);
void main()
{
	float cost_price;
	cost_price=5000;
	float s_price=sell(5000);
	printf("discount on  product in rupess is %f \n",s_price);
	
	float price=cost_price-s_price;
	printf("discounted price of prodeuct is %f",price);
	
}   
 sell(float cost_price)
{
	float  selling_discount;
	if(cost_price>=1500)
	{
		selling_discount=cost_price*20/100;
		
	}
	else if(cost_price<1500 && cost_price>1000)
	{
		selling_discount=cost_price*15/100;
	}
	else if(cost_price<1000 && cost_price>400)
	{
		selling_discount=cost_price*10/100;
	}
	else{
		selling_discount=cost_price*5/100;
	}
	return selling_discount;
	
}
