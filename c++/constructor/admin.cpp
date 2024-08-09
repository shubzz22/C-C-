#include<stdio.h>
#include<string.h>
struct Admin {

    int id;
    char name[20];
    double salary;
    int allowance;
    
    Admin()
    {
    	printf("default constructor:");
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0.0;
    	this->allowance=0;
	}
   Admin(int a,char* nm,double sal,int allowan)//parameterized constructor 
   {
   	this->id=a;
   	strcpy(this->name,nm);
   	this->salary=sal;
   	this->allowance=allowan;
   }
   

    void display() {
        printf("\n------------------\n");
        printf("%d\n",this->id);
        printf("%s\n",this->name);
        printf("%lf\n",this->salary);
        printf("%d\n",this->allowance);
        printf("\n------------------\n");
    }
};

 main() {
    Admin a1;
    a1.display();
  Admin a2(1,"shubham",2000.0,100);
    a2.display();

    
}
