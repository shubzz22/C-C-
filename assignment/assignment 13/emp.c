//emplyoee

#include<stdio.h>
struct employee
{
	int emp_id;
	char emp_name[30];
	int emp_salary;
};

void main()
{
	printf("enter the employee one details:\n");
	struct employee e1,e2;
	scanf("%d",&e1.emp_id);
	scanf("%s",e1.emp_name);
	scanf("%d",&e1.emp_salary);
	
	printf("%d ",e1.emp_id);
	printf("%s ",e1.emp_name);
	printf("%d \n",e1.emp_salary);
	
	
	
	printf("display  employee two details:\n");
	e2.emp_id=1;
	strcpy(e2.emp_name,"shubham");
	e2.emp_salary=400000;
	printf("empid=%d ",e2.emp_id);
	printf("emp name =%s ",e2.emp_name);
	printf("salary=%d\n",e2.emp_salary);
	
	
}