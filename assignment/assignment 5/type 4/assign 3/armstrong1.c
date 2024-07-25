#include<stdio.h>
void main()
{
	
	int num=153;
    int n1=armstrong(num);
    if(n1==1)
    {
    		printf("armstrong");
	}
	else
			printf("not arm");
}
	int armstrong(int num)
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
 	return 1;
	
    else
   {
    return 0;
		
   }
	}
