#include<stdio.h>
float conver(float);
int main()
{
	int a; //cel and a is ferenite
	a=25;
	float ans=convertor(a);
	printf(" converted value is %f",ans);
}

convertor(int a)
{
	
 float c=(a*1.8)+32;
	return c;
}
