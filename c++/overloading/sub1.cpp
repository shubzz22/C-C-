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
	
Complex	sub(Complex c2)
	{
		Complex temp;
		temp.real=this->real-c2.real;
		temp.imaginary=this->imaginary-c2.imaginary;
		return temp;
	}
	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d-%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(100,50);
		Complex	c2(23,22);
		Complex c3=c1.sub(c2);
		c3.display();
		
	}
	