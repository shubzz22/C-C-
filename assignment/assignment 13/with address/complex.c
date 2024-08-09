//complex real,imaginary
#include<stdio.h>
typedef struct complex
{
	int real;
	int imaginary;
	
}complex;

void store(complex* ,int );
void display(complex* ,int );
void main()
{
	int n;
	printf("enter size of array-");
	scanf("%d",&n);
	complex Complex[n];
	store(Complex,n);
	
	display(Complex, n);

	

}

void store(complex* Complex,int n)
	{
		for(int i=0;i<n;i++)
		{
				printf("enter  real number-");
				scanf("%d",&Complex[i].real);
				printf("enter imaginary number-");
				scanf("%d",&Complex[i].imaginary);
		}
	}
void display(complex* Complex,int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("\n-------------------\n");
			printf("real number=%d\n",Complex[i].real);
			printf("imaginary number=%d + %di",Complex[i].real,Complex[i].imaginary);
			printf("\n-------------------\n");
			
		}
	}
	