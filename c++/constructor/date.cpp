	
#include<stdio.h>
#include<string.h>
struct Date
{
	int day;
	char month[20];
	int year;
	
	Date()
	{
		this->day=00;
		strcpy(this->month,"not given");
		this->year=0000;
	}
	Date(int d,char * m,int y)
	{
		this->day=d;
		strcpy(this->month,m);
		this->year=y;
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
		dob.display();
		Date doa(14,"may",2023);
		doa.display();
	}