#include<stdio.h>

void main()
{
	//int arr[5]={10,20,30,40,50};
	 int size;
	 printf("enter no elements :");
	 scanf("%d",&size);
	 int arr[size];
	   
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			
		}
		int sum=0;
		for(int i=0;i<size;i++)
		{
		
			sum=sum+arr[i];
			
		}	
		printf("\n sum  of array is  %d\n",sum);
		for(int j=size-1;j>=0;j--)
		{
				printf(" %d ",arr[j]);
		}   
		
}

//void main