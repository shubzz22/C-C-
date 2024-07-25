#include<stdio.h>
int even_odd(int);
void main()
{
	int no=45;
	int ans=even_odd(no);
	if(ans==1)
	printf("no %d is even ",no);
	else
	printf("no %d is odd",no);
}
int even_odd(int no)
{
	if(no%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
