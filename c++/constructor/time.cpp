#include<stdio.h>
#include<string.h>
struct Time
{
	int hour;
	int min;
	int sec;
	
	Time()//default 
	{
		this->hour=0;
		this->min=0;
		this->sec=0;
	}
	Time(int a,int b, int c)//parameterized
	{
		this->hour=a;
		this->min=b;
		this->sec=c;
	}
	
	void display()
	{
		printf("\n-------------------------\n");
		printf("%d hour ",this->hour);
		printf("%d min ",this->min);
		printf("%d sec ",this->sec);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Time t1;
		t1.display();
		Time t2(12,23,50);
		t2.display();
	}