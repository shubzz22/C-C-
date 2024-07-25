#include<stdio.h>
void main()
{
	int last , second_last,temp,sum=0;
int	n=30423;
	
	
	while(n>=999)
{
	last=n%10;
	sum=sum+last;
	n=n/10;
	
}	

printf("%d",sum);
	
}
