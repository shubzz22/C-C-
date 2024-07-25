#include<stdio.h>
void main()
{
	int num=1;
	range(num);
}
range(int num)
{
	int sum=0;
	 
	 
	 while(num<=5)
	 {
	 	sum=sum+num;
	 	num++; 
	 	printf("%d \n",sum);
	 	
	 }
	 printf("addtion of ranges is %d",sum);
}
