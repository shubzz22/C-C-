#include<stdio.h>

void main()
{   int c=even_odd();
	if(c==1)
	printf("no  is even ",c);
	else
	printf("no is odd",c);
}
	int even_odd()
{
	int no=45;
	if(no%2==0)
	return 1;
	else
	return 0;

}
