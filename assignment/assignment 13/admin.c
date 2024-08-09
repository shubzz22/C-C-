//admin (id,name,salary,allowance)
#include<stdio.h>

struct admin
{
  int id;
  char name[20];
  int salary;
  int allowance;	
};

void main()
{
	struct admin a1,a2;
	printf("enter the admin one details:\n");
	
	scanf("%d",&a1.id);
	scanf("%s",a1.name);
	scanf("%d",&a1.salary);
	scanf("%d",&a1.allowance);
	
	
	printf("id %d ,",a1.id);
	printf("name %s ,",a1.name);
	printf("salary %d ,",a1.salary);
	printf("allowance %d \n",a1.allowance);
	
	a2.id=10;
	a2.allowance=200;
	strcpy(a2.name,"shrikant");
	a2.salary=40000;
	printf("id %d ,",a2.id);
	printf("name %s ,",a2.name);
	printf("salary %d ,",a2.salary);
	printf("allowance %d \n",a2.allowance);
	
}