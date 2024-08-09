#include <iostream>
#include <cstring>

struct Admin {

    int id;
    char name[20];
    double salary;
    int allowance;
    
    
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
    
    a1.display();

    
}
