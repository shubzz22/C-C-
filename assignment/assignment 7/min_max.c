#include<stdio.h>
void main()
{
	int arr[100],size,i,j;
	printf("enter size of element: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	
	}
	printf("maximum element in array is %d\n",max);
	
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	
	}
	printf("minimum element in array is %d",min);
	
}