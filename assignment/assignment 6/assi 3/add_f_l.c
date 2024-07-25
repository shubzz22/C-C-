#include<stdio.h>
int addition_last_first(int);
void main()
{

int n;
scanf("%d",&n);
int add1=add(n);
printf("addition of  digit %d ",add1);
}
int add(int n)
{
int	first,last,sum=0;

last=n%10; 
first=n;
while(first>=10)
{
	first=first/10;
}
sum=first+last;
	return sum;
}
