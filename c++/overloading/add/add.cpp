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
	
Complex	add(int a)
	{
		Complex temp;
		temp.real=this->real+a;
		temp.imaginary=this->imaginary+a;
		return temp;
	}
Complex add(Complex c1, int a) {
        Complex temp;
        temp.real = a + c1.real;
        temp.imaginary = a + c1.imaginary;
        return temp;
    }
    Complex	add(Complex c4)
	{
		Complex temp;
		temp.real=this->real+c4.real;
		temp.imaginary=this->imaginary+c4.imaginary;
		return temp;
	}
	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d+%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(15,10);
		Complex c3=c1.add(10);
		c3.display();
		
		Complex c4(20,30);
		Complex c5=c1.add(c4);
		c5.display();
		
		Complex c6=add(c1,c4);
		c6.display();
		
		
		
		
		
	}
	