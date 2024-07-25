#include<stdio.h>
#include<math.h>
void main()
{
	int n1,p;
	printf("enter no\n");
	scanf("%d\n",&n1);
	scanf("%d",&p);
	power_no(n1,p);
	
//	int power=pow(n1,p);
//	printf("power of number %d is %d",n1,power);
}

 void power_no(int n1,int p)
  {
  	int power=pow(n1,p);
	printf("power of number %d is %d",n1,power);
  }