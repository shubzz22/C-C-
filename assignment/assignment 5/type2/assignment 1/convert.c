#include<stdio.h>
float convert();
int main(){
      float a=convert();
	printf(" converted value is%f",a);
}
  float convert()
{
	float c,a; //cel and a is ferenite
	a=25;
	
	c=(a*1.8)+32;
	return c;
}
