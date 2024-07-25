#include<stdio.h>
void main()
{
	int n,i,flag=0;
	n=15;
	i=2;
      
      while(i<n)
      {
      	if(n%i==0)
		  {
      		flag=1;
      		break;
		  }
		  i++;
	  }
	  if(flag==1)
        printf(" no %d is prime no",n);
        else
        printf("no %d is not prime",n);
}
