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
	
Complex	div(Complex c2)
	{
		Complex temp;
		temp.real=this->real/c2.real;
		temp.imaginary=this->imaginary/c2.imaginary;
		return temp;
	}
	void display()
	{
		printf("\n-------------------------\n");
	//	printf("Real number:%d\n",this->real);
		printf("Complex no::%d/%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(10,10);
		Complex	c2(3,2);
		Complex c3=c1.div(c2);
		c3.display();
		
	}
	