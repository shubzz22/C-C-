#include<stdio.h>

typedef struct emp
{
	int id;
	char name[20];
	int salary;
	
}emp;

emp store();

void main()
{
	emp e1;
	e1=store();
	
	display(e1);
	
}

 emp store()
 {
 	emp e;
 	printf("enter id-");
 	scanf("%d",&e.id);
 	printf("enter name-");
 	scanf("%s",e.name);
 	printf("enter salary-");
 	scanf("%d",&e.salary);
 	return e;
 }
 

 display(emp e)
{   
	printf("%d ",e.id);
	printf("%s ",e.name);
	printf("%d ",e.salary);
}
 