#include<stdio.h>
struct student

{

 int rollno;
 char name[20];
 int marks;
};
void main()
{
	struct student s1;
	s1.rollno=101;
	strcpy(s1.name,"shubham");
	s1.marks=40;
	printf("rollno=%d",s1.rollno);
	printf("\nrollno=%s",s1.name);
	printf("\nmarks=%d\n",s1.marks);
	
	printf("\n enter 2nd student details: ");
	struct student s2;
	scanf("%d",&s2.rollno);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	
	printf("\nstudent 2nd rollno=%d",s2.rollno);
	printf("\nstudent 2nd name=%s",s2.name);
	printf("\nstudent 2nd marks=%d",s2.marks);
	
	printf("\n\nenter 3rd student details: ");
	struct student s3;
	scanf("%d",&s3.rollno);
	scanf("%s",s3.name);
	scanf("%d",&s3.marks);
	
	printf("\nstudent 3rd rollno=%d",s3.rollno);
	printf("\nstudent 3rd name=%s",s3.name);
	printf("\nstudent 3rd marks=%d",s3.marks);
}
