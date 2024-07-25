#include<stdio.h>

void main()
{

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
		printf("sum of the array is %d",sum);
	}
		