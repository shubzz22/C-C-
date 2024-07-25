#include<stdio.h>
void main()
{
	int n;
		printf("enter the size of array a");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	
	printf("\nenter the %d element in 1st array:\n"); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nenter the size of second  array");
	scanf("%d",&n);
	
	printf("\nenter the element in 2nd array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}

	add(n,a,b,c);

}

void add(int n,int* a,int* b,int* c)
{
	


	for(int i=0;i<n;i++)
	{
		
		 c[i]=a[i]+b[i];
	}
	printf("\naddition of array is :");
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	
}