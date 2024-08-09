#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
	char compony[20];
	
	Employee()
	{
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		strcpy(this->compony,"not given");
	}
		Employee(int a,char*nm,int b, char* c)
	{
		this->id=a;
		strcpy(this->name,nm);
		this->salary=b;
		strcpy(this->compony,c);
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
		e1.display();
		Employee e2(123,"abhishek",23213,"Wipro");
		e2.display();
	}