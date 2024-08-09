#include<stdio.h>
#include<string.h>
struct Distance
{
	int feet;
	int inches;

	
	void setfeet(int a)
	{
		this->feet=a;
	}
	
	void setinches(int b)
	{
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
		d1.setfeet(20);
		d1.setinches(22);
		
		d1.display();
	}