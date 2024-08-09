//distance feet , inches 

typedef struct distance{
	int feet;
	int inches;
}distance;

distance store();
void display();
void main()
{
	        distance d,d1;
	
	d=store();
	d1=store();
	distance store();
	display(d);
	printf("distnace of d1 is \n");
	display(d1);
}

distance store()
	{
    distance d;
	printf("enter the distance\n");
	scanf("%d",&d.feet);
	scanf("%d",&d.inches);
	return d;
	
	}
	
	void display(distance d)
	{
	printf("%d Feet ",d.feet);
	printf("%d Inches\n",d.inches);
	}