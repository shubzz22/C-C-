#include<stdio.h>
void main()
{  int ans1=operator();
	printf("ans is %d \n",ans1);
}
int operator()
{
	int n1,n2,ans;
	n1=30;
	n2=3;
	
	char op='*';
	
	if(op=='+')
	{
		ans=n1+n2;
		return ans;
	}
	else if(op=='-')
	{
		ans=n1-n2;
		
	}
	else if(op=='*'){
		
		ans=n1*n2;
		
	}
	else if(op=='/')
	{
		ans=n1/n2;
	
	}
	else if(op=='%')
	{
		ans=n1%n2;
	
	}
	else{
	return 0;
	}
	return ans;
}
