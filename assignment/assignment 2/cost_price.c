#include<stdio.h>

void main()
{
	float cost_price, selling_discount,price;
	cost_price=5000;
	
	if(cost_price>=15000)
	{
		selling_discount=cost_price*20/100;
	}
	else if(cost_price<15000 && cost_price>10000)
	{
		selling_discount=cost_price*15/100;
	}
	else if(cost_price<10000 && cost_price>4000)
	{
		selling_discount=cost_price*10/100;
	}
	else{
		selling_discount=cost_price*5/100;
	}
	
	printf("discount on  product in rupess is %f \n",selling_discount);
	
	 price=cost_price-selling_discount;
	printf("discounted price of prodeuct is %f",price);
}   
