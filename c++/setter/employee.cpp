#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
	char compony[20];
	
	void setid(int a)
	{
		this->id=a;
	}
	void setname(char* nm)
	{
		strcpy(this->name,nm);
	}
	
	void setsalary(int b)
	{
		this->salary=b;
	}
	void setcompony(char* ch)
	{
		strcpy(this->compony,ch);
	}
	
	void display()
	{
		printf("\n--------------\n");
		printf("%d\n",this->id);
		printf("%s\n",this->name);
		printf("%lf\n",this->salary);
		printf("%s\n",this->compony);
		
	}
};

	main()
	{
		Employee e1;
		e1.setid(200);
		e1.setname("shubham");
		e1.setsalary(2920);
		e1.setcompony("TCS");
		e1.display();
	}