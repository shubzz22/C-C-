#include<stdio.h>
void main()
{
	
	int n=101;
	palin(n);
	
}

void palin(int n)
{
	int sum=0,rem,temp;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("%d \n",sum);
	
	if(temp==sum)
	printf("palindrome \n");
	else
	printf("not palindrome \n");
}