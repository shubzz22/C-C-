//product id ,name,quantity,price

typedef struct product{
	int id;
	char name[20];
	int quantity;
	int price;
} product;

void main()
{
	product p1,p2;
	printf("enter the product 1 details\n");
	scanf("%d",&p1.id);
	scanf("%s",p1.name);
	scanf("%d",&p1.quantity);
	scanf("%d",&p1.price);
	
	printf("%d ",p1.id);
	printf("%s ",p1.name);
	printf("%d ",p1.quantity);
	printf("%d\n",p1.price);
	
	printf("enter the product 2 details\n");
	scanf("%d",&p2.id);
	scanf("%s",p2.name);
	scanf("%d",&p2.quantity);
	scanf("%d",&p2.price);
	
	printf("%d ",p2.id);
	printf("%s ",p2.name);
	printf("%d ",p2.quantity);
	printf("%d \n",p2.price);
}