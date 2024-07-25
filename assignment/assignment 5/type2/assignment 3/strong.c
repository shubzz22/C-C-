#include<stdio.h>
void main()
{
	
	int isS=strong();
	printf("%d",isS);
}
int strong()
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
//		printf("%d",fact);
	}
	sum=sum+fact;
	n=n/10;
}
if(sum==temp)
return 1;
else
return 0;
}
