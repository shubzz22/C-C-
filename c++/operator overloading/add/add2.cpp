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
	
Complex	operator+(Complex c1)
	{
		Complex temp;
		temp.real=this->real+c1.real;
		temp.imaginary=this->imaginary+c1.imaginary;
		return temp;
	}
	void display()
	{
		printf("\n-------------------------\n");
	//	printf("Real number:%d\n",this->real);
		printf("Complex no::%d+%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(10,10);
		Complex	c2(23,22);
		Complex c3=c2+c1;
		c3.display();
		
	}
	