 #include<stdio.h>

int main()
{
	int len,width;
	len=20;
	width=20;
	float radius=5;
	if(len>=0 && width>=0)
{
	
	printf("lenghth and width of rectangle is %d and %d \n",len,width);
	int res=len*width;
	printf("Area of rectangle is %d\n",res);
	
	int perimeter=(len+width)*2;
	printf("perimeter of rectangle is %d \n\n",perimeter);
}
else
{

printf("radius of circle is %f \n",radius);
float area_circle=3.14*radius*radius;
printf("area of circle %f \n",area_circle);

 float circum= 2*3.14*radius;
 printf("circumference of circle is %f",circum);

}

}
