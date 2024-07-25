#include<stdio.h>
void addition_last_first();
void main()
{

int n;
scanf("%d",&n);
add(n);
}
add(int n)
{
int	first,last,sum=0;
printf("no is %d \n ",n);
last=n%10; //6
first=n;
while(first>=10)
{
	first=first/10;
}
sum=first+last;
printf("addition of first digit %d and last digit %d is %d",first,last,sum);	
}
