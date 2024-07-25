#include<stdio.h>
void strreverse(char* );
void main()
{
	char a[100]="shubham";
	//char b[50];
//	printf("%s",a);
  strreverse(a);
	
	
}
void strreverse(char* a)
{
	int n=	strlen(a);
//	char b[40];
	
	for(int i=0,j=n-1;i<=j;i++,j--)
	{
		
		
			char temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	}
      printf("%s",a);
	}