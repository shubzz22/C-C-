 #include<stdio.h>
void area_rect(int,int);
void peri_rect(int,int);
void cir(float);
int main()
{
	int len,width;
	len=20;
	width=20;
	float radius=5;
	area_rect(len,width);
	peri_rect(len,width);
	cir(radius);
}

 void area_rect(int x,int y)
	{
	
	printf("lenghth and width of rectangle is %d and %d \n",x,y);
	int res=x*y;
	printf("Area of rectangle is %d\n",res);
	}

void peri_rect(int x,int y)
	{

	int perimeter=(x+y)*2;
	printf("\nperimeter of rectangle is %d \n\n",perimeter);


 	}
 	
 void	cir(float radius)
 	{
printf("radius of circle is %f \n",radius);
float area_circle=3.14*radius*radius;
printf("area of circle %f \n",area_circle);

float circum= 2*3.14*radius;
printf("circumference of circle is %f",circum);
	 }
 

	
