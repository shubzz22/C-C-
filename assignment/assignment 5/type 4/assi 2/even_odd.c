#include<stdio.h>
int salary(int );
int even_odd(int);
void main()
{
	int num,basic_salary,da,ta,hra,total_salary;
	char a='2';
	num=100;
	basic_salary=5000;
	

	if(a=='1')
	{
	int sum=even_odd(num);
	if (sum==1)
	printf("num %d is even \n",sum);
	else
	printf("num %d is odd \n",sum);
	}
	else if(a=='2')
	{
	int ans=salary(basic_salary);
	printf("total salary is %d \n",ans);
	}
	else
	{
		printf("invalid option\n");
	}
	
}
int salary(int basic_salary)
{
		int da,ta,hra,total_salary;
		da=basic_salary*10/100;
		ta=basic_salary*20/100;
		hra=basic_salary*25/100;
		total_salary=basic_salary+da+ta+hra;
		return total_salary;
}
int even_odd(int num)
{
	if(num %2==0)
		{
			return 1;
		}else{
			return 0;
		}
}
