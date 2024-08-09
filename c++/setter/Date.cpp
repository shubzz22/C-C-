#include<stdio.h>
#include<string.h>
struct Date
{
	int day;
	char month[20];
	int year;
	
	void setday(int a)
	{
		this->day=a;
	}
	
	void setmonth(char* nm)
	{
		strcpy(this->month,nm);
	}
	void setyear(int c)
	{
		this->year=c;
	}
	
	void display()
	{
		printf("\n-------------------------\n");
		printf("%d ",this->day);
		printf("%s ",this->month);
		printf("%d",this->year);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Date dob;
		dob.setday(22);
		dob.setmonth("jan");
		dob.setyear(2004);
		
		dob.display();
	}