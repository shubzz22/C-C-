#include<stdio.h>
#include<string.h>
void maximun(int*,int);
void main()
{
	int arr[100],size,i,j;
	printf("enter size of element: ");
	scanf("%d",&size);

	maximun(arr,size);

}

void maximun(int* arr,int size)
{

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
    int min=arr[0];
    for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	
	}	
printf("minimum element in array is %d",min);
printf("maximum element in array is %d\n",max);
}