#include<stdio.h>
void sorted(int ,int *);
void main()
{
	int arr[100],size,i,j;
	printf("enter size of element: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sorted(size,arr);
}

void sorted(int size,int * arr)
{
	int max;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		
		if(arr[i]>arr[j])
			{
			max=arr[i];
			arr[i]=arr[j];
			arr[j]=max;
			}
		}
	
	}
	printf("sorted array is :\n");
		for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
