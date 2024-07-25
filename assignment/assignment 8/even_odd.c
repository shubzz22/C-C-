#include<stdio.h>
void 	even(int ,int*);
void odd(int ,int* );
void main ()
{
	int a[1000],size,i,j,n,f;
	printf("enter the size of array: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	even(size,a);
	odd(size,a);

		
	}
void 	even(int size,int* a)
	{
		printf("even number are : ");
	for(int i=0;i<size;i++)
	{
		int n=a[i];
		int f=0;
		if(n%2==0)
		{
			printf(" %d",n);
		}		
	}
	}
	
void odd(int size,int* a)
	{
		printf("\nodd number are : ");
	for(int i=0;i<size;i++)
	{
		int n=a[i];
		int f=0;
		if(n%2!=0)
		{
			printf(" %d ",n);
		}		
	}
	}
