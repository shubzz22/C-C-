#include<stdio.h>
void celsius(float*);
int main()
{
	float c,a; //cel and a is ferenite
	a=25;
//	=&a;
	celsius(&a);
	
	
}
void celsius(float* num)
{
	float c=((*num)*1.8)+32;
	printf(" converted value is%f",c);
}