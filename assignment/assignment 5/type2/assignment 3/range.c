#include<stdio.h>
int range();
void main()
{
	int ans =range();
	printf("%d",ans);
}
 int range()
 {
 	int num=1;
	int sum=0;
	 
	 
	 while(num<=5)
	 {
	 	sum=sum+num;
	 	num++; 
	
	 	
	 }
    return sum;
 }
