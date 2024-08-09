#include<stdio.h>
void main()		
{
	int n,m;
		printf("enter the size of array a");
	scanf("%d",&n);
int a[n],b[n];
//c[n];
//	int *a=(int*)malloc(sizeof(int)*n);
//	int *b=(int*)malloc(sizeof(int)*n);
	int *c=(int*)malloc(sizeof(int)*n);
	printf("\nenter the %1 element in 1st array:\n"); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nenter the size of second  array");
	scanf("%d",&m);
	
	printf("\nenter the element in 2nd array:\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}

	add(n,m,a,b,c);

}

void add(int n,int m,int* a,int* b,int* c)
{
	

	int size;
	if(m>n)
	size=m;
	else
	size=n;
	for(int i=0;i<size;i++)
	{
		 c[i]=a[i]+b[i];
	}
	printf("\naddition of array is :");
	for(int i=0;i<size;i++)
	{
		printf("%d ",c[i]);
	}
	
}