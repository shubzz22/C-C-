#include<stdio.h>
#include<string.h>
struct Complex {
    int real;
    int imaginary;

    // Default constructor
    Complex() {
        this->real = 0;
        this->imaginary = 0;
    }

    // Parameterized constructor
    Complex(int a, int b) {
        this->real = a;
        this->imaginary = b;
    }

    // Method to add a number to the complex number
    
	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d*%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};
Complex mul(Complex c2, Complex c1);
	main()
	{
		Complex c1(15,10);
		Complex	c2(23,22);
		Complex c3=mul(c2,c1);
		c3.display();
		
	}
	Complex mul(Complex c2, Complex c1) {
        Complex temp;
        temp.real = c1.real* c2.real;
        temp.imaginary =c1.imaginary* c2.imaginary;
        return temp;
    }