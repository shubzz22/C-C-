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
    Complex operator/(Complex c1, int a) {
        Complex temp;
        temp.real =  c1.real/a;
        temp.imaginary = c1.imaginary/a;
        return temp;
    }
	void display()
	{
		printf("\n-------------------------\n");

		printf("Complex no::%d/%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};

	main()
	{
		Complex c1(15,12);
		Complex	c2(23,22);
		Complex c3=c1/3;
		c3.display();
		
	}
	