#include<stdio.h>
void armstrong();
void main()
{
	armstrong();
}
void armstrong()
	{
		int rem,sum=0,temp;
	int num=153;
	temp=num;
	while(num>0)
	{
		rem=num%10;
	    sum=sum+(rem* rem*rem);
	   	num=num/10;
		
	}
	if(temp==sum)
	printf("no  is armstrong");
	
else{

		printf("not arm");
}
	}
