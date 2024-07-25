#include<stdio.h>
void main()
{
	
	int sal=salary();
printf("total salary is %d \n",sal);
	int a=even_odd();
 	if(a==1)
	printf("num  is even \n",a);
	else
	printf("num is odd \n",a);
}
int salary()
{
	int da,ta,hra,total_salary;
	int basic_salary=5000;
	
		da=basic_salary*10/100;
		ta=basic_salary*20/100;
		hra=basic_salary*25/100;
		total_salary=basic_salary+da+ta+hra;
		return total_salary;
		
	}
	
int	even_odd()
	{
			int num=100;
		if(num %2==0)
		{
			return 1;
		}else{
			return 0;
		}
	}

