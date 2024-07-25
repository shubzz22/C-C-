#include<stdio.h>
void main()
{
	int n1,n2;
	n1=30;
	n2=3;
	
	
	
	oper(&n1,&n2);
}
	oper(int* n3,int* n4)
{
	char op='*';
	int ans;
	if(op=='+')
	{
		ans=(*n3)+(*n4);
		printf("ans is %d \n",ans);
	}
	else if(op=='-')
	{
		ans=(*n3)-(*n4);
		printf("ans is %d \n",ans);
	}
	else if(op=='*'){
		
		ans=(*n3)*(*n4);
		printf("ans is %d \n",ans);
	}
	else if(op=='/')
	{
		ans=(*n3)/(*n4);
		printf("ans is %d \n",ans);
	}
	else if(op=='%')
	{
		ans=(*n3)%(*n4);
		printf("ans is %d \n",ans);
	}
	else{
		printf("invalid op");
	}
}
