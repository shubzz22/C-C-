#include<stdio.h>
int prime(int );
void main()
{
	int n;
	n=11;
	int ans=prime(n);
	if(ans==1)
	printf(" no %d is not prime number",n);
	else
	 printf("no %d is  prime number",n);
}
int prime(int n)

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
        return 1;
        else
    	return 0;
}
