#include<stdio.h>
void palindrme();
void main()
{
	palindrome();
}
palindrome()
{
	int n,sum=0,rem,temp;
	n=153;
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
