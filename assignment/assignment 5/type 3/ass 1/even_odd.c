#include<stdio.h>

void main()
{
	int no=45;
	even_odd(no);
	
}

void even_odd(int no)
	{
	if(no%2==0)
	printf("no %d is even ",no);
	else
	printf("no %d is odd",no);
	}
