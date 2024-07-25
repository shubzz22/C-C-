#include<stdio.h>
void factorial();
void main()
{
	factorial();
}

void factorial()
{
	int i,no;
	int factorial=1;
	scanf("%d",&no);
		i=1;

for(i=1;i<=no;i++)
{
	factorial=factorial*i;
	
}
printf("factorial is %d",factorial);

}
