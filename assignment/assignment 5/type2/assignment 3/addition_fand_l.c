#include<stdio.h>
int addition_last_first();
void main()
{
int ans=addition_last_first();
printf("Addition of first and last no is %d",ans);


}
int  addition_last_first()
{
int n,first,last,sum=0;

n=456;

last=n%10; //6
first=n;
while(first>=10)
{
	first=first/10;
}
sum=first+last;
return sum;	
}
