//admin (id,name,salary,allowance)
#include<stdio.h>

typedef struct admin
{
  int id;
  char name[20];
  int salary;
  int allowance;	
}admin;

void store(admin* ,int );
void display(admin* ,int );
void main()
{

	int n;
	printf("enter the arry to store-");
	scanf("%d",&n);
	admin Admin[n];
	store(Admin,n);
	display(Admin,n);
	
}

void store(admin* Adminarr,int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("enter the admin  details %d :\n",i+1);
			printf("enter id-");
			scanf("%d",&Adminarr[i].id);
			printf("enter name-");
	        scanf("%s",Adminarr[i].name);
	        printf("enter salary-");
			scanf("%d",&Adminarr[i].salary);
			printf("enter allowance-");
			scanf("%d",&Adminarr[i].allowance);
		}
	}
	
void	display(admin* Adminarr,int n)
	{
		for (int i=0;i<n;i++)
		{
		
			printf("\n-------------------------------\n");
			printf("id-%d\n",Adminarr[i].id);
			printf("name-%s\n",Adminarr[i].name);
			printf("salary-%d\n",Adminarr[i].salary);
			printf("allowance-%d\n",Adminarr[i].allowance);
			printf("\n--------------------------------\n");
	}
}
	
	