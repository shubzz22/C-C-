#include<stdio.h>
void main()
{
	int first,last;
	printf("enter the start number\n");
		scanf("%d",&first);
		printf("enter the end number\n");
		scanf("%d",&last);
	int i;
	for(i=first;i<=last;i++)
	{
		printf("%d\n",i);
		i++;
	}
}
