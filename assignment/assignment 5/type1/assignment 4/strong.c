#include<stdio.h>
void strong();
void main()
{
	 strong();
}
void strong()
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
	    int j=1;
		while(j<=a)
		{
		 fact=fact*j;
			j++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==i){
	
	printf("%d \n",i);
}
}
}
