#include<stdio.h>

void main()
{
	int n;
//	n=153;
	scanf("%d",&n);
	pali(&n);
	
}
 void pali(int* n)
{
	int	sum=0,rem;
	int temp=(*n);
	while((*n)>0)
	{
		rem=(*n)%10;
		sum=sum*10+rem;
		(*n)=(*n)/10;
	}
	printf("%d \n",sum);
	
	if(temp==sum)
	printf("palindrome \n");
	else
	printf("not palindrome \n");
}
