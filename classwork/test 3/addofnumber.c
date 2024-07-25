#include<stdio.h>
void main()
{    
    int s,sum,odd_sum,even_sum;
	int n=32145;
	while(n>0)
{ 
 int rem=0;
		  
		 rem=n%10;
		if(rem%2==0)
	{
		even_sum=even_sum+rem;
		 }
	
	else{
		odd_sum=odd_sum+rem;
	}
		
	   
		n=n/10;
	}
	 printf("addition of sum number is %d \n\n",even_sum);
	 printf("addition of sum number is %d",odd_sum);

}
