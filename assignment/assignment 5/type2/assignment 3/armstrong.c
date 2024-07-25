#include<stdio.h>
void main()
{
	
 int a=armstrong();
 if(a==1)
 printf("number is armstrong");
 else
 printf("number is not armstrong");				
}

   int 	armstrong()
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
	return 1;
	
else{
    return 0;
}			
	}
