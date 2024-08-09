#include<stdio.h>
void main()
{
	  int * ptr=(int*)malloc(sizeof(int)*5);
	  int n=5;   
//	  for(int i=0;i<n;i++)
//	  {
//	  	scanf("%d\n",&ptr[i]); 
//	  }
//	  for(int i=0;i<n;i++)
//	  {
//	  	printf("%d",ptr[i]); 
//	  }
	  
	  printf("address of ptr %u",ptr); 
	 
	 int ns=10;
	 int * newptr=(int*)realloc(ptr,sizeof(int)*(n+ns));
	  printf("\naddress of new ptr %u",newptr);
//	 for(int i=n;i<(n+ns);i++)
//	  {
//	  	scanf("\n%d",&newptr[i]); 
//	  }
//	  for(int i=0;i<(n+ns);i++)
//	  {
//	  	printf("%d",newptr[i]); 
//	  }
}