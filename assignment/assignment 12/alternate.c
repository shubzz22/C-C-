#include<stdio.h>
void alternate(int ,int*);
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
	
	printf("array is : ");
    for(int i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		
	alternate(size,arr);
		
	}
void 	 alternate(int size,int* arr)
	 {
	 	
	printf("\nalternate number is : ");
	for(int i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
			i++;
		}
	 }