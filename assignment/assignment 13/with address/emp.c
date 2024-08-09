#include<stdio.h>

typedef struct emp
{
	int id;
	char name[20];
	int salary;
	
}emp;

 void store(emp* employee,int n);
 void display(emp* employee,int n);

void main()
{
	int n;
	printf("enter size of arr-");
	scanf("%d",&n);
	emp employee[n]; //employee[i]
	store(employee,n);
	display(employee,n);
	
}

 void store(emp* employee,int n)
 

 {
 	for(int i=0;i<n;i++)
 	{
	 printf("enter the %d data\n",i+1);
 	printf("enter id-");
 	scanf("%d",&employee[i].id);
 	printf("enter name-");
 	scanf("%s",employee[i].name);
 	printf("enter salary-");
 	scanf("%d",&employee[i].salary);
}
 }
 

void display(emp* employee,int n)
{   
for(int i=0;i<n;i++)
	{
	
	printf("\n---------------------------\n");
	printf("id-%d\n",employee[i].id);
	printf("name-%s\n",employee[i].name);
	printf("salary-%d\n",employee[i].salary);
	printf("\n---------------------------\n");
	
	}
}