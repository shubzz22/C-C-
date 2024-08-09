//complex real,imaginary

typedef struct complex
{
	int real;
	int imaginary;
	
}complex;

 complex	store();
void main()
{
	complex n2;
	n2=store();
  display(n2);
	
	
}
 complex	store()
 	{
 	complex n;
	
	printf("enter  real number-");
	scanf("%d",&n.real);
	printf("enter imaginary number-");
	scanf("%d",&n.imaginary);
	 return n;
	 }
	 
	 display(complex n)
	 {
	printf( "real number=%d\n",n.real);
	printf(" imaginary number=%d + %di",n.real,n.imaginary);
	 }