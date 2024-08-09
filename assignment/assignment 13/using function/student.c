#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[30];
	int marks;
	
}student;

student store();
void main()
{
	student s1;
	s1=store();
	display(s1);
}

student store()
{
	student s;
	printf("enter roll no-");
	scanf(" %d",&s.rollno);
	printf("enter name-");
	scanf("  %s",&s.name);
	printf("enter marks-");
	scanf("  %d",&s.marks);
	return s;
}

 void display(student s)
{

	printf("\nstudent  rollno=%d",s.rollno);
	printf("\nstudent  name=%s",s.name);
	printf("\nstudent  marks=%d",s.marks);
}