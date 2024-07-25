#include<stdio.h>
void main()
{
	int n1,n2;
	n1=30;
	n2=3;
	
	
	
	oper(n1,n2);
}
	oper(int n1,int n2)
{
	char op='*';
	int ans;
	if(op=='+')
	{
		ans=n1+n2;
		printf("ans is %d \n",ans);
	}
	else if(op=='-')
	{
		ans=n1-n2;
		printf("ans is %d \n",ans);
	}
	else if(op=='*'){
		
		ans=n1*n2;
		printf("ans is %d \n",ans);
	}
	else if(op=='/')
	{
		ans=n1/n2;
		printf("ans is %d \n",ans);
	}
	else if(op=='%')
	{
		ans=n1%n2;
		printf("ans is %d \n",ans);
	}
	else{
		printf("invalid op");
	}
}
