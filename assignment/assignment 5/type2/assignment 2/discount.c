#include<stdio.h>
void main()
{
	int ans =sum();
	printf("discount is %d",ans);
}
int sum()
{
	float price,discount;
	 price=5000;
	char choice='2';
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
	
	return discount;
   }
 
