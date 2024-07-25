#include<stdio.h>
void area();
void circle();
int main()
{
	int len,width;
	len=20;
	width=20;
	float radius=5;

 area( &len, &width);
 circle( &radius);
}

void area(int* len, int* width){

printf("lenghth and width of rectangle is %d and %d \n",*len,*width);
	int res=(*len)*(*width);
	printf("Area of rectangle is %d\n",res);
	
	int perimeter=((*len)+(*width))*2;
	printf("perimeter of rectangle is %d \n\n",perimeter);
}
void circle(float* radius){
	printf("radius of circle is %f \n",(*radius));
float area_circle=3.14*(*radius)*(*radius);
printf("area of circle %f \n",area_circle);

 float circum= 2*3.14*(*radius);
 printf("circumference of circle is %f",circum);
}

