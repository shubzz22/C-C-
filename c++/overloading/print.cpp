#include<stdio.h>
struct printer
{
	void print()
	{
		
	}
	void print(int a)
	{
		printf("%d\n",a);
	}
	
	void print(float x)
	{
		printf("%f\n",x);
	}
};

main()
{
	printer p1;
	int t=10;
	p1.print(t);
	float b=28.4;
	p1.print(b);
}