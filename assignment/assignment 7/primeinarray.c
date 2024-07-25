#include<stdio.h>
void main ()
{
	int a[1000],size,i,j,n,f;
	printf("enter the size of array: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("prime number are: ");
	for(int i=0;i<size;i++)
	{
		n=a[i];
		f=0;
		if(n%2==0)
		for(int j=2;j<n;j++)
		{
			if(n%j==0)
			f=1;
			break;
		}
	if(f==0)
	printf("%d ",n);
    }
}