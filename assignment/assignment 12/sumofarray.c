#include<stdio.h>
#include<stdlib.h>
void sumarr(int , int* );
void main()
{

	 int size;
	 printf("enter no elements :");
	 scanf("%d",&size);
	 int *arr=(int*)malloc(sizeof(int)*size);
	   
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			
		}
		sumarr(size,arr);
	}
	
	void sumarr(int size, int* arr)
		{
			int sum=0;
		for(int i=0;i<size;i++)
		{
		
			sum=sum+arr[i];
			
		}
		printf("sum of the array is %d",sum);
		}