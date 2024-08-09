#include<stdio.h>
#include<string.h>
struct Complex
{
	int real;
	int imaginary;
	
	Complex()
	{
		this->real=0;
		this->imaginary=0;
	}
	Complex(int a,int b)
	{
		this->real=a;
		this->imaginary=b;
	}
	
	void display()
	{
		printf("\n-------------------------\n");
		printf("Real number:%d\n",this->real);
		printf("Imaginary number:%d+%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1;
		c1.display();
	Complex	c2(23,22);
		c2.display();
		
	}