#include<stdio.h>
#include<math.h>
void main()
{
	int no,i,temp;
		int sum=0;
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		int sum=0;
		temp=i;
		int count=0;
		while(temp>0)
		{
			
		int rem=temp%10;
		count++;
		temp=temp/10;
			
		}
//	printf("%d",count);
		
		temp=i;
		while(temp>0)
		{
			int a=temp%10;
			int power=pow(a,count);
			sum=sum+power;
			temp=temp/10;
			
		}
		if(sum==i)
		{
			   printf("%d ",i);
		}
		
		
	}
}
