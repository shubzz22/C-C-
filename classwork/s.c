#include<stdio.h>
void main()
{
	int no;
	scanf("%d",&no);
	int i=1;
	for(i=1;i<=no;i++)
	{
		int temp=i;
     	int	sum=0;
	       	while(temp>0)
		{
			
	    int	a=temp%10;
	    int fact=1;
		while(a>0)
		{
		 fact=fact*a;
			a--;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==i){
	
	printf("%d \n",i);
}
}
}
