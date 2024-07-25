 #include<stdio.h>
int ans(int,int);
int sum(int,int);
float circle_area(int);
int main()
{
	int len,width;
	len=20;
	width=20;
	int radius=5;
	int ans=area(len,width);
	printf("area of rectangle is %d\n",ans);
	
	int sum= perimeter(len,width);
	printf("perimter is %d \n",sum);
	
  int result=circle_area(radius);
  printf("area of circle is %d",result);
	
	

}


int area(int len,int width)
{
	int res=len*width;
	return res;
}
int perimeter(int len,int width)
{
		int perimeter=(len+width)*2;
		return perimeter;
}
 float circle_area(int radius)
 {
 	int area_circle=3.14*radius*radius;
 	return area_circle;
 	
 }
