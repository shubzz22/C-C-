#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	double marks;
	
	student()
	{
		this->roll=0;
		strcpy(this->name,"not given");
;		this->marks=0;
	}
	student(int a,char* nm,double b)
	{
		this->roll=a;
		strcpy(this->name,nm);
		this->marks=b;
	}
	void display()
	{
		printf("\n--------------\n");
		printf("%d\n",this->roll);	
		printf("%s\n",this->name);
		printf("%lf\n",this->marks);
		printf("\n--------------\n");
	}
};
 main()
	{
		student s1;
		s1.display();
		student s2(22,"shubham",9.8);
		s2.display();
	
}