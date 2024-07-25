#include<stdio.h>
void main()
{
int ans=palindrome();
if(ans==1)
printf("no is palindrome");
else
printf("no is not palindrome");
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
   return 1;
	else
	return 0;
 }
