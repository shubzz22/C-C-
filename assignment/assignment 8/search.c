#include<stdio.h>
void search(int , int*);
void main()
{
	int a[100],size;
	printf("enter the size of array:");
	scanf("%d",&size);
	
	printf("enter %d element in the array: \n",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	search(size,a);
}

void search(int size, int* a)
 {
 	printf("\nenter number you want to search :");
	int n;
	scanf("%d",&n);
	for(int i=0;i<size;i++)
	{
	  int num=n;
	  if(num==a[i])
	  {
	  	printf("number is present at %d index",i);
	  }
	  
    }
 }