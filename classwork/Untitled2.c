#include<stdio.h>
void main()
{
	int no,sum;
	scanf("%d",&no);
	int i=1;
	while(i<no)
	{
		if(no%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==no)
	printf("%d",sum);
	
}
