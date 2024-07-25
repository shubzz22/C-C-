#include<stdio.h>

void main()
{
	int a=10;
	int b;
    int* c; //declare pointer
    	printf("%d \n",b); 
    printf("The value of a is %d \n",a);
	c=&a; //store address of at c
	b=*c; // value at address c  store at b

	printf("The value of b is %d",b);
}
