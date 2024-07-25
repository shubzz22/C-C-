#include<stdio.h>
void main()
{
	int s=isPrime();
	  if(s==1)
        printf(" no  is not prime number");
        else
        printf("no  is  prime number");
}

 int isPrime()
 {
 	int n,i,flag=0;
 scanf("enter number %d",n);
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
	  return 1;
 }
