#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	double marks;
	
	void setroll(int a)
	{
		this->roll=a;
	}
	void setname(char* nm)
	{
	 strcpy(this->name,nm);
	}
	void setmarks(double b)
	{
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
		student s1,s2;
		s1.setroll(10);
		s2.setroll(17);
		s1.setname("shubham");
	    s2.setname("shrikant");
	    s1.setmarks(99.0);
	    s2.setmarks(77.7);
		s1.display();
		s2.display();
	}