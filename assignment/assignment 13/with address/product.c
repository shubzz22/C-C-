//product id ,name,quantity,price

typedef struct product{
	int id;
	char name[20];
	int quantity;
	int price;
} product;


	
void	store(product* ,int );
void display(product* ,int );

void main()
{
int size;
printf("enter size of array-");
scanf("%d",&size);
product Productarr[size];

	store(Productarr,size);
	
	display(Productarr,size);
}
	
void	store(product* Productarr,int n)
	{
	
		for(int i=0;i<n;i++)
		{
				printf("enter the product %d details\n",i+1);
				printf("Id-");
				scanf("%d",&Productarr[i].id);
				printf("Name-");
				scanf("%s",Productarr[i].name);
				printf("Quantity-");
				scanf("%d",&Productarr[i].quantity);
				printf("Price-");
				scanf("%d",&Productarr[i].price);
		}

	}
	
void display(product* Productarr,int n)
	{
	for(int i=0;i<n;i++)
	{
	printf("\n-----------------------\n");
	printf("Id-%d\n",Productarr[i].id);
	printf("Name-%s\n",Productarr[i].name);
	printf("Quantity-%d\n",Productarr[i].quantity);
	printf("Price-%d\n",Productarr[i].price);
	printf("\n-----------------------\n");
	}
	}