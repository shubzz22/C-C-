//selling price of book based on cost price and discount
#include<stdio.h>
int selling_price();
void main()
{
	int cost_price, discount;
	printf("enter price of book: ");
	scanf("%d",&cost_price);
    int price=selling_price(cost_price);
    printf("selling price of book is %d",price);
	
}

 int selling_price(int cost_price)
 {
 	int sell;
 	if(cost_price>500){
	 
 	int discount=cost_price/100*20;
 	int sell=cost_price-discount;
 
 }
 else if(cost_price<500 && cost_price>250)
 {
 	int discount=cost_price/100*15;
 	sell=cost_price-discount;
 }
 else if(cost_price<250 && cost_price>150)
 {
 	int discount=cost_price/100*10;
 	 sell=cost_price-discount;
 }
 else
 {
 	int discount=cost_price/100*5;
 	sell=cost_price-discount;
 }
 return sell;
}