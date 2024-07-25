#include<stdio.h>
void main()
{
	int n;
	n=11;
	prime(n);
	
}
prime(int n)

{
    int i=2,flag=0;
	
      
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
        printf(" no %d is not prime number",n);
        else
        printf("no %d is  prime number",n);
}
