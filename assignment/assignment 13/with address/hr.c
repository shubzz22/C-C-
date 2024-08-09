#include<stdio.h>

typedef struct hr {
    int id;
    char name[20];
    int salary;
    int commission;
} hr;

// Function prototype
void store(hr* , int ) ;
void display(hr* ,int );

void main() {
    int n;
    printf("enter the size of array-");
    scanf("%d",&n);
    hr Hr[n];
    store(Hr,n);
    display(Hr,n);
    
    
}

void store(hr* Hr, int n) 

{

	for(int i=0;i<n;i++)
{
	printf("enter the %d data",i+1);
	printf("\nEnter id: ");
    scanf("%d", &Hr[i].id);
    printf("Enter name: ");
    scanf("%s", Hr[i].name); 
    printf("Enter salary: ");
    scanf("%d", &Hr[i].salary);
    printf("Enter commission: ");
    scanf("%d", &Hr[i].commission);
}
    
   
}

void display(hr* Hr,int n)
{   for(int i=0;i<n;i++)
	{
		printf("\n------------------\n");
		printf("Id-%d\n",Hr[i].id);
		printf("Name-%s\n",Hr[i].name);
		printf("Commission-%d\n",Hr[i].commission);
		printf("Salary-%d\n",Hr[i].salary);
		printf("\n------------------\n");
	}
}