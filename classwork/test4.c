// print factor of giben range no;

#include<stdio.h>
void main()
{
	int n1;
	int n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	divisor(n1,n2);
	
}
int divisor(int n1,int n2)
{
	for(int i=n1;i<=n2;i++)
	{
		printf("divisor of no %d ",i);
//		printf("%d",i);
		for(int j=1;j<=i;j++)
		{
			
			int factors=0;
			if(i%j==0)
			{
				
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}