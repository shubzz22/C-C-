#include<stdio.h>
void Prime(int* );
void main()
{
	int n;
	scanf("%d",&n);
	Prime(&n);
}
void Prime(int* n)
{
	int i,j,k;
	for(i=1;i<=(*n);i++)
	{
		k=0;
     	for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
			
		}
		if(k==0)
		printf("%d\n",i);
	
	}
	
}