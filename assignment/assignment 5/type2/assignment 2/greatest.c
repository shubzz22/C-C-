#include<stdio.h>

void main()
{
   int ans =great();
   printf("gratest no is %d",ans);
}

int great()
{
		int a=30;
	int b=20;
	int c=50;
	
if(a>b && a>c)
{
		return a;	
}
else if (b>a && b>c)
{
	return b;
}
else{
	return c;
}
}
