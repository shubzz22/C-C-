#include<stdio.h>
void perfect();
void main()
{
	perfect();
 
}
void perfect()
{
	int i,j,sum,n;
	printf("enter enter : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		printf("%d \n",i);
		
	}
}
