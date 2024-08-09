//complex real,imaginary

typedef struct complex
{
	int real;
	int imaginary;
	
}complex;

 complex	store();
void main()
{
	complex n;
	
	printf("enter  real number-");
	scanf("%d",&n.real);
	printf("enter imaginary number-");
	scanf("%d",&n.imaginary);
		printf( "real number=%d\n",n.real);
	printf(" imaginary number=%d + %di",n.real,n.imaginary);
	
	
}
 