#include<stdio.h>
int add();
void main()
{
int res=add();
printf("%d",res);
}

 int add()
{
	int a=10,b=20;
	int c=a+b;
	return c;
}
