#include<stdio.h>
void main()
{
	int n;
	
	n=145;
	int ans=strong(n);
	if(ans==1)
	printf("no %d strong number",n);
	else
	printf("not",n);
}

int strong(int n)
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
return 1;
else
return 0;
}
