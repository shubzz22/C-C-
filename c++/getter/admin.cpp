#include<stdio.h>
#include<string.h>
struct Admin {

    int id;
    char name[20];
    double salary;
    int allowance;
    
    student
    
    void setId(int a) {
        this->id = a;
    }

    void setName( char* nm) {
        strcpy(this->name, nm);
    }

    void setSalary(double b) {
        this->salary = b;
    }

    void setallowance(int c) {
        this->allowance = c;
    }


int	getId()
	{
		return this->id;
	}
	
	char *getname()
	{
		return this->name;
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
    a1.setId(200);
    a1.setName("Shubham");
    a1.setSalary(2920);
    a1.setallowance(1000);
    int c=a1.getId();
    
    printf("%d",c);
    a1.display();

    
}
