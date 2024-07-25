#include<stdio.h>
void sorttwo(int ,int ,int *, int *);
void main()
{
	int n,m;
	printf("enter the size of array a");
	scanf("%d",&n);
	int a[n];
	
	printf("\nenter the %d element in 1st array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the size of array");
	scanf("%d",&m);
	int b[m];
	printf("\nenter the element in 2nd array:\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
 sorttwo(n,m,a,b);

}

void sorttwo(int n,int m ,int *a, int *b)
	{
	for(int i=0;i<m;i++)
{
	a[n+i]=b[i];
}
printf("\n1st and 2nd sorted array is\n:");
for(int i=0;i<m+n;i++)
	{
		printf("%d ",a[i]);
	}
	}
