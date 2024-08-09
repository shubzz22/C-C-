#include<stdio.h>

struct complex{
	int real,img;
	
	complex(int a,int b)
	{
		this->real=a;
		this->img=b;
	}
	int operator>(complex c2)
	 {
	 	if(this->real>c2.real)
	 	return 1;
	 	else 
	 	return 0;
	 }
};

main()
{
	complex c1(20,10);
	complex c2(30,20);
	if(c1>c2)
	{
		printf("c1 is greater:\n");
		
	}
	else
	printf("c2 is greater\n");
}