#include<stdio.h>
#include<string.h>
struct Distance
{
	int feet;
	int inches;

	
	Distance()
	{
		this->feet=0;
		this->inches=0;
	}
	
	Distance(int a,int b)
	{
		this->feet=a;
		this->inches=b;
	}
	
	
	void display()
	{
		printf("\n-------------------------\n");
		printf("%d Feet ",this->feet);
		printf("%d Inches ",this->inches);
	
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Distance d1;
		d1.display();
		Distance d2(20,10);
		d2.display();
	}