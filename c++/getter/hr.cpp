#include<stdio.h>
#include<string.h>
struct Hr
{
	int id;
	char name[20];
	double salary;
	int commision;
	
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
	void setcommision(int c)
	{
		this->commision=c;
	}
	int getid(){
		return this->id;
	}
	int	getsalary()
	{
		return this->salary;
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
		h1.setid(200);
		printf("%d id ",h1.getid());
		h1.setname("shubham");
		h1.setsalary(2920);
		printf("%d salary",h1.getsalary());
		h1.setcommision(1000);
		h1.display();
	}