#include<stdio.h>
void even_odd();
void main()
{
	even_odd();
	
}

void even_odd()
{
	int no=45;
	if(no%2==0)
	printf("no %d is even ",no);
	else
	printf("no %d is odd",no);
}
