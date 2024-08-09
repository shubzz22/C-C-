#include<stdio.h>
#include<string.h>
struct Hr
{
	int id;
	char name[20];
	double salary;
	int commision;
	
	Hr()
	{
	this->id=0;
	strcpy(	this->name,"notgiven");
	this->salary=0;
	this->commision=0;
	}
	Hr(int a,char* nm,int b,int c)
	{
	this->id=a;
	strcpy(	this->name,nm);
	this->salary=b;
	this->commision=c;
	}
	
	void display()
	{
		printf("\n--------------\n");
		printf("%d\n",this->id);
		printf("%s\n",this->name);
		printf("%lf\n",this->salary);
		printf("%d\n",this->commision);
		printf("\n--------------\n");
		
	}
};

	main()
	{
		Hr h1;
		h1.display();
		Hr h2(1,"chaitanya",34521,3000);
		h2.display();
	}