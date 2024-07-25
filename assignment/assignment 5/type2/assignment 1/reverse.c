//reverse of the three digit no..
#include<stdio.h>
int main()
{
	
	int res=reverse();
	printf("%d",res);
}

 int reverse()
{
		int num=569;
	if(num<999 && num>99){
	
	int r1=num%10; //6
	int q1=num/10; //54
	
	int r2=q1%10; //4
	int q2=q1/10; //5
	
	int r3=q2%10; //5
	int q3=q2/10; //0
	int sum =r1 + r2+r3;
	printf("sum of %d id %d \n",num,sum);
	int rev=(r1*100)+(r2*10)+(r3*1);
	return rev;
	}
}

