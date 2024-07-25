#include<stdio.h>
void operation();
void main()
{
	operation();
}
operation()
{
	int n1,n2,ans;
	n1=30;
	n2=3;
	
	char op='*';
	
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
