//distance feet , inches 

typedef struct distance{
	int feet;
	int inches;
}distance;

void  store(distance* Distancearr,int n );
void display(distance* Distancearr,int n);
void main()
{
	int n;
	printf("enter rhe size of array-");
	scanf("%d",&n);
	distance Distancearr[n];
	
	
	store(Distancearr,n);
	
	display(Distancearr,n);
}

void  store(distance* Distancearr,int n )
	{
	for(int i=0;i<n;i++)
	{
	
	printf("enter the distance %d\n",i+1);
	printf("Feet-");
	scanf("%d",&Distancearr[i].feet);
	printf("Inches-");
	scanf("%d",&Distancearr[i].inches);
	}
	
	}
	
	void display(distance* Distancearr,int n)
	{
		for(int i=0;i<n;i++)
{
	printf("\n------------\n");
	printf("%d Feet ",Distancearr[i].feet);
	printf("%d Inches\n",Distancearr[i].inches);
	printf("\n------------\n");
	}
}