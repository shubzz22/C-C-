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
	
Complex	operator/(int a)
	{
		Complex temp;
		temp.real=this->real/a;
		temp.imaginary=this->imaginary/a;
		return temp;
	}
	Complex	operator/(Complex c2)
	{
		Complex temp;
		temp.real=this->real/c2.real;
		temp.imaginary=this->imaginary/c2.imaginary;
		return temp;
	}

	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d/%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};
Complex	operator/(int a,Complex c2);
	main()
	{
		Complex c1(18,10);
		Complex c2(6,2);
		Complex c3=c1/5;
		c3.display();
		Complex c4=c1/c2;
		c4.display();
		Complex c5=12/c2;
		c5.display();
		
	}
		Complex	operator/(int a,Complex c2)
	{
		Complex temp;
		temp.real=a/c2.real;
		temp.imaginary=a/c2.imaginary;
		return temp;
	}
	