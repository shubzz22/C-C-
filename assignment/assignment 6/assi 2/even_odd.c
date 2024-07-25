#include<stdio.h>
void salary(int*);
even_odd(int*);
void main()
{
	int num,basic_salary,da,ta,hra,total_salary;
	char a='2';
	num=100;
	basic_salary=5000;
	

	if(a=='1')
	{
		even_odd(&num);
	}
	else if(a=='2')
	{
	salary(&basic_salary);
	}
	else
	{
		printf("invalid option\n");
	}
	
}
void salary(int* basic_salary)
{
		int da,ta,hra,total_salary;
		da=(*basic_salary)*10/100;
		ta=(*basic_salary)*20/100;
		hra=(*basic_salary)*25/100;
		total_salary=(*basic_salary)+da+ta+hra;
		printf("total salary is %d \n",total_salary);
}
even_odd(int* num)
{
	if((*num) %2==0)
		{
			printf("num %d is even \n",(*num));
		}else{
			printf("num %d is odd \n",(*num));
		}
}
