#include<stdio.h>
void main()
{
	int n,i,fact,rem;
	int sum=0;
	n=145;
	int temp=n;
	
	while(n>0){
		
	i=1,fact=1;
	rem=n%10;
	while(i<=rem)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	n=n/10;
}
if(sum==temp)
printf("no %d strong number",temp);
else
printf("not",temp);
}
