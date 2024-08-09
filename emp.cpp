#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
	char company[20];
	
	Employee()
	{
		printf("default constructor employee:\n");
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		strcpy(this->company,"not given");
	}
		Employee(int a,char*nm,int b, char* c)
	{
		printf("parameterized constructor employee:\n");
		this->id=a;
		strcpy(this->name,nm);
		this->salary=b;
		strcpy(this->company,c);
	}
	void display()
	{
		printf("\n--------------\n");
		printf("id-%d\n",this->id);
		printf("name-%s\n",this->name);
		printf("salary-%lf\n",this->salary);
		printf("company-%s\n",this->company);
		printf("\n--------------\n");
		
	}
	


};
struct Hr
{
	int id;
	char name[20];
	double salary;
	int commision;
	
	Hr()
	{
	printf("default constructor Hr:\n");
	this->id=0;
	strcpy(	this->name,"notgiven");
	this->salary=0;
	this->commision=0;
	}
	Hr(int a,char* nm,int b,int c)
	{
	printf("parameterized constructor Hr:\n");
	this->id=a;
	strcpy(	this->name,nm);
	this->salary=b;
	this->commision=c;
	}
	
	void display()
	{
		printf("\n--------------\n");
		printf("id-%d\n",this->id);
		printf("name-%s\n",this->name);
		printf("salary-%lf\n",this->salary);
		printf("commision-%d\n",this->commision);
		printf("\n--------------\n");
		
	}
};
struct Admin {

    int id;
    char name[20];
    double salary;
    int allowance;
    
    Admin()
    {
    	printf("default constructor admin:\n");
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0.0;
    	this->allowance=0;
	}
   Admin(int a,char* nm,double sal,int allowan)
   {
   	printf("parameterized constructor Hr:\n");
   	this->id=a;
   	strcpy(this->name,nm);
   	this->salary=sal;
   	this->allowance=allowan;
   }
   

    void display() {
       printf("\n------------------\n");
        printf("id-%d\n",this->id);
        printf("name-%s\n",this->name);
        printf("salary-%lf\n",this->salary);
        printf("allowance-%d\n",this->allowance);
        printf("\n------------------\n");
    }
    
};
struct Salesmanager {

    int id;
    char name[20];
    double salary;
    int incentive;
    int target;
    
	Salesmanager()
	{
	printf("default constructor salesmanager:");
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	
	Salesmanager(int a,char* nm,int b,int c,int d)
	{
		printf("parameterized constructor Salesmanager:\n");
		this->id=a;
		strcpy(this->name,nm);
		this->salary=b;
		this->incentive=c;
		this->target=d;
	}
	
	
	
    void display() {
        printf("\n------------------\n");
        printf("id-%d\n",this->id);
        printf("name-%s\n",this->name);
        printf("salary-%lf\n",this->salary);
        printf("incentive-%d\n",this->incentive);
        printf("target-%d\n",this->target);
        printf("\n------------------\n");
    }
};

	main()
	{
		Employee e1;
		e1.display();
		Employee e2(478,"gaurav",6589,"tcs");
		e2.display();
	
		Admin a1;
    	a1.display();
  		Admin a2(1,"shrikant",5000.0,300);
   		 a2.display();
   		 
   		Hr h1;
		h1.display();
		Hr h2(1,"omkar",98123,7000);
		h2.display();
		
	Salesmanager s1;
    s1.display();
    Salesmanager s2(1,"shrikant",50000,4000,40);
    s2.display();
	}