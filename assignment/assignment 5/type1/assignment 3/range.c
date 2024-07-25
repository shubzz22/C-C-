#include<stdio.h>
void range();
void main()
{
	 range();
}
void range()
{
	int num=1;
	int sum=0;
	 
	 
	 while(num<=5)
	 {
	 	sum=sum+num;
	 	num++; 
	 	printf("%d \n",sum);
	 	
	 }
	 printf("addtion of ranges is %d",sum);
}
