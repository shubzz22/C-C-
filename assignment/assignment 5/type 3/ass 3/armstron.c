#include<stdio.h>
void main()
{
	
	int num=153;
	armstrong(num);
					
}
	armstrong(int num)
	{
	int rem,sum=0;
	int	temp=num;
	while(num>0)
	{
		rem=num%10;
	    sum=sum+(rem* rem*rem);
	   	num=num/10;
		
	}
	if(temp==sum)
	printf("armstrong");
	
else{

		printf("not arm");
}
	}
