#include<stdio.h>
#include<string.h>
struct Complex
{
	int real;
	int imaginary;
	
	void setreal(int a)
	{
		this->real=a;
	}
	
	void setimaginary(int b)
	{
		this->imaginary=b;
	}
	
		int getreal()
		{
		 return	this->real;
		}
		int getimaginary()
		{
		 return	this->imaginary;
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
		c1.setreal(20);
		c1.setimaginary(22);
		int b=	c1.getreal();
		int n=	c1.getimaginary();
		printf("real no %d\n",b);
		printf("imaginary no %d+%di\n",b,n);
		c1.display();
	}