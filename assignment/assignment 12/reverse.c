

#include<stdio.h>
void reverse(int ,int*);
void main()
{
	//int arr[5]={10,20,30,40,50};
	 int size;
	 printf("enter no elements :");
	 scanf("%d",&size);
	 int *arr=(int*)malloc(sizeof(int)*size);
	   
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			
		}
		
		reverse(size,arr); 
		
}

void reverse(int size,int*arr)
{
	printf("reveerse of the array is");
		for(int j=size-1;j>=0;j--)
		{
				printf(" %d ",arr[j]);
		}  
}
