//product id ,name,quantity,price

typedef struct product{
	int id;
	char name[20];
	int quantity;
	int price;
} product;


product	store();

void main()
{
	product p1,p2;

	p1=store();
	p2=store();
	display(p1);
	display(p2);
	
	
	
}
product	store()
	{
	product p;
	printf("enter the product 1 details\n");
	scanf("%d",&p.id);
	scanf("%s",p.name);
	scanf("%d",&p.quantity);
	scanf("%d",&p.price);
	return p;
	}
	
void display(product p)
	{
	printf("%d ",p.id);
	printf("%s ",p.name);
	printf("%d ",p.quantity);
	printf("%d\n",p.price);
	}