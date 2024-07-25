#include<stdio.h>

int main(){
	float c,a; //cel and a is ferenite
	
	prinf("enter degree: ");
	scanf("%d",&a);
    float ans=converter(a);
	
	
}
 float converter(float a)
{
  float c=(a*1.8)+32;
	printf(" converted value is%f",c);
}
