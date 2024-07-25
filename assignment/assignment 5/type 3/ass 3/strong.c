#include<stdio.h>
void main()
{
	int n;
	
	n=145;
	strong(n);
}

strong(int n)
{
	int rem,fact,i,sum=0;
	int temp =n;
	
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
