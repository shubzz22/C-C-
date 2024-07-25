#include<stdio.h>

void main()
{
	int a=5;
	printf("enter integer:  \n");
	for(int i=1;i<=10;i++)
	{
	
	int ans=table(a);
	printf("%d",ans );
    }
}
   table(int a)
   {
   	int sum;
	
	int i=1;
	while(i<=10){
		sum=i*a;
		
		i++;
		return sum;	
	}
	
   }
