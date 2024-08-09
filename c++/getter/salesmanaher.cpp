#include <iostream>
#include <cstring>

struct Salesmanager {

    int id;
    char name[20];
    double salary;
    int incentive;
    int target;
    
    void setId(int a) {
        this->id = a;
    }

    void setName(const char* nm) {
        strcpy(this->name, nm);
    }

    void setSalary(double b) {
        this->salary = b;
    }

    void setIncentive(int c) {
        this->incentive = c;
    }

    void setTarget(int d) {
        this->target = d;
    }
    int getId()
    {
    	return this->id;
	}
  int	getsalary()
	{
		return this->salary;
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
    s1.setId(200);
   printf("%d id\n",s1.getId());
    s1.setName("Shubham");
    s1.setSalary(2920);
    printf("%d salary",s1.getsalary());
    s1.setIncentive(1000);
    s1.setTarget(10);
    s1.display();

    
}
