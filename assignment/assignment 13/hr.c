//hr(id,name,sakary,commission)
#include<stdio.h>

typedef struct hr
{
	int id;
	char name[20];
	int salary;
	int commission;
}hr;

void main()
{
	hr h1,h2;
	printf("enter id-");
	scanf("%d",&h1.id);
	printf("enter name-");
	scanf("%s",h1.name);
	printf("enter salary-");
	scanf("%d",&h1.salary);
	printf("enter commision-");
	scanf("%d",&h1.commission);
	
	
	printf("%d ",h1.id);
	printf("%s ",h1.name);
	printf("%d ",h1.salary);
	printf("%d ",h1.commission);
	
	h2.id=2;
	strcpy(h2.name,"shubham");
	h2.commission=500;
	h2.salary=34000;
	
	printf("\n%d ",h2.id);
	printf("%s ",h2.name);
	printf("%d ",h2.salary);
	printf("%d ",h2.commission);
	
}