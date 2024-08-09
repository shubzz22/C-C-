#include<stdio.h>
#include<string.h>
struct Time
{
	int hour;
	int min;
	int sec;
	
	void sethour(int a)
	{
		this->hour=a;
	}
	
	void setmin(int b)
	{
		this->min=b;
	}
	void setsec(int c)
	{
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
		t1.sethour(20);
		t1.setmin(22);
		t1.setsec(1);
		t1.display();
	}