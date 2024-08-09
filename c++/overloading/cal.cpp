#include<stdio.h>
#include<string.h>
struct Calculator{
	void add(int a,int b)
	{
		printf("%d\n",a+b);
	}
	void add(int a,double b)
	{
		printf("%lf\n",a+b);
	}
		void add(double a,double b)
	{
		printf("%lf\n",a+b);
	}
	void add(double a,int b)
	{
		printf("%lf\n",a+b);
	}
	
	
};

	main()
	{
		Calculator c1,c2,c3,c4;
		c1.add(22,30);
		c2.add(2.2,30);
		c3.add(2,3.43);
		c4.add(2.2,5.6);
	}