#include <iostream>
#include <cstring>

struct Salesmanager {

    int id;
    char name[20];
    double salary;
    int incentive;
    int target;
    
	Salesmanager()
	{
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	
	Salesmanager(int a,char* nm,int b,int c,int d)
	{
		this->id=a;
		strcpy(this->name,nm);
		this->salary=b;
		this->incentive=c;
		this->target=d;
	}
	
	
	
    void display() {
        printf("\n------------------\n");
        printf("%d\n",this->id);
        printf("%s\n",this->name);
        printf("%lf\n",this->salary);
        printf("%d\n",this->incentive);
        printf("%d\n",this->target);
        printf("\n------------------\n");
    }
};

 main() {
    Salesmanager s1;
    s1.display();
    Salesmanager s2(1,"shu",20000,2000,20);
    s2.display();

    
}
