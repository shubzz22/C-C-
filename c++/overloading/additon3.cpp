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

		printf("Complex no::%d+%di",this->real,this->imaginary);
		printf("\n-------------------------\n");
		
	}
};
  Complex add(Complex c1, int a);
	main()
	{
		Complex c1(15,10);
		Complex	c2(23,22);
		Complex c3=add(c1,22);
		c3.display();
		
	}
	
	 Complex add(Complex c1, int a) {
        Complex temp;
        temp.real = a + c1.real;
        temp.imaginary = a + c1.imaginary;
        return temp;
    }