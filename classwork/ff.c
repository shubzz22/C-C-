#include<stdio.h>
int even_odd();
void main()
{
	int res=even_odd();
	if(res==0)
	printf("even");
	else
	printf("odd");
}
even_odd()
{
	int no;
	scanf("%d",&no);
	if(no%2==0){
	return 0;
	}
	else
	return 1;
}
