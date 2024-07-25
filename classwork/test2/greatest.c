#include<stdio.h>
void main()
{
	printf("enter three no \n");
	int a=10,b=50,c=5;

	if(a>b && a>c)
	printf("%d is greater than %d and %d",a,b,c);
	else if(b>a && b>c)
	printf("%d is greater than %d and %d",b,a,c);
	else
	printf("%d is greater than %d and %d",c,a,b);
}
