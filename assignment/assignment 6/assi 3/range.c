#include<stdio.h>
void main()
{
	int num=1;
    int ans=range(&num);
	printf("addtion of ranges is %d",ans);
}
range(int* num)
{
	int sum=0;
	 
	 
	 while((*num)<=5)
	 {
	 	sum=sum+(*num);
	 	(*num)++; 
	 	
	 	
	 }
	return sum;
}
