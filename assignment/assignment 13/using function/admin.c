#include<stdio.h>

typedef struct admin
{
  int id;
  char name[20];
  int salary;
  int allowance;	
}admin;

void admin store();

void main()
{
	struct admin a1,a2;
	
	
}
	admin store()
	{
	admin a;
	printf("enter the admin one details:\n");
	printf("enter id-");
	scanf("%d",&a.id);
	printf("enter name-");
	scanf("%s",a.name);
	printf("enter salary-");
	scanf("%d",&a.salary);
	printf("enter allowance-");
	scanf("%d",&a.allowance);
	return a;
void display(admin a)
	{
	printf("id %d ",a.id);
	printf("name %s ",a.name);
	printf("salary %d ",a.salary);
	printf("allowance %d \n",a.allowance);
	}
	
	