#include<stdio.h>
 void b_salary();
  void even_odd();
void main()
{
char a='1';
if(a=='1')
	even_odd();
	else
	 b_salary();
}

void b_salary(){
	int basic_salary,da,ta,hra,total_salary;
	
	
	basic_salary=5000;
	{
		da=basic_salary*10/100;
		ta=basic_salary*20/100;
		hra=basic_salary*25/100;
		total_salary=basic_salary+da+ta+hra;
		printf("total salary is %d \n",total_salary);
	}
}
void even_odd()
{
int num=100;
	if(num %2==0)
		{
			printf("num %d is even \n",num);
		}else{
			printf("num %d is odd \n",num);
		}
}
