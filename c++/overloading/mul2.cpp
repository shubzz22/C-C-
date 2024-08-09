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
	
Complex	mul(int a)
	{
		Complex temp;
		temp.real=this->real*a;
		temp.imaginary=this->imaginary*a;
		return temp;
	}
	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d*%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(15,10);
		Complex c3=c1.mul(10);
		c3.display();
		
	}
	