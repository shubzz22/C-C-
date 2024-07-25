#include<stdio.h>
void table();
void main()
{

	table();
}
void table()
{
		int a=5;
	printf("enter integer:  \n");
	int sum;
	
	int i=1;
	while(i<=10){
		sum=i*a;
		printf("%d * %d = %d \n",i,a,sum);
		i++;
	}
}
