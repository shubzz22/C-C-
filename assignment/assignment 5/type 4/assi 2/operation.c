#include<stdio.h>
void operation(char,int ,int,int);
void main()
{
	int n1,n2,ans;
	n1=30;
	n2=3;
	
	char op='*';
	operation(op,n1,n2,ans);
	
}

void operation(char op,int n1,int n2, int ans)
	{
		if(op=='+')
	{
		int ans=n1+n2;
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