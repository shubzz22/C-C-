#include<stdio.h>

typedef struct student {
	int id;
	char name[20];
	int marks;
} student;

void store(student* StudArr,int n);
void display(student* StudArr,int n);
void main() {
	int n;
	
	printf("enter size of array:-");
	scanf("%d",&n);
	student StudArr[n];
	store(StudArr,n);
	display(StudArr,n);

}


void store(student* StudArr,int n) {

	for(int i=0; i<n; i++) 
	{
		printf("enter the data of student %d \n",i+1);
		printf("enter id- ");
		scanf("%d",&(StudArr[i].id));
		printf("enter name- ");
		scanf("%s",StudArr[i].name);
		printf("enter marks- ");
		scanf("%d",&StudArr[i].marks);
		
	}
}
	
void display(student* StudArr,int n) 
{

	for(int i=0; i<n; i++) 
	{
		printf("\n-----------------\n");
		printf("id -%d \n",(StudArr[i].id));
		printf("name-%s\n",StudArr[i].name);
		printf("marks-%d\n",StudArr[i].marks);
		printf("\n-----------------\n");
		
	}
	
	}