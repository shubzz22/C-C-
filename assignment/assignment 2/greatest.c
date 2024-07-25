#include<stdio.h>

void main()
{
	int a=30;
	int b=20;
	int c=50;
	
if(a>b && a>c)
{
		printf("%d is greater than % and %d",a,b,c);	
}
else if (b>a && b>c)
{
	printf("%d is greater than %d and %d",b,a,c);
}
else{
	printf("%d is greater than %d and %d",c,a,b);
}
}
