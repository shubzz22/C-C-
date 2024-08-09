//distance feet , inches 

typedef struct distance{
	int feet;
	int inches;
}distance;

void main()
{
	distance d,d1;
	printf("enter the distance\n");
	scanf("%d",&d.feet);
	scanf("%d",&d.inches);
	
	printf("distnace of d is \n");
	printf("%d Feet ",d.feet);
	printf("%d Inches\n",d.inches);
	
	printf("enter the distance\n");
	scanf("%d",&d1.feet);
	scanf("%d",&d1.inches);
	
	printf("distnace of d1 is \n");
	printf("%d Feet ",d1.feet);
	printf("%d Inches\n",d1.inches);
}