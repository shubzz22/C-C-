#include<stdio.h>
void main()
{

 int ans=facto();
 printf("%d",ans);
}

int  facto()
 {
 		int i,no;
	int factorial=1;
	printf("enter no= ");
	scanf("%d",&no);
		i=1;

for(i=1;i<=no;i++)
{
	factorial=factorial*i;
	
}
return factorial;
 }
