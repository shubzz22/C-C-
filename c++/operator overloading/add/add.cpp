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
	Complex	operator+(int a)
	{
		Complex temp;
		temp.real=this->real+a;
		temp.imaginary=this->imaginary+a;
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

Complex	operator+(int,Complex );
	main()
	{
		Complex c1(10,10);
		Complex	c2(23,22);
		Complex c3=c2+c1;
		c3.display();
		Complex c4=c1+10;
		c4.display();
		Complex c5(50,40);
		Complex c6=c5+20;
		c6.display();
		
	}
	Complex	operator+(int a,Complex c2)
	{
		Complex temp;
		temp.real=a+c2.real;
		temp.imaginary=a+c2.imaginary;
		return temp;
	}