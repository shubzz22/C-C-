#include<stdio.h>

typedef struct hr {
    int id;
    char name[20];
    int salary;
    int commission;
} hr;


hr store();

void main() {
    hr h1,h2;
     h1 = store();
     h2 = store();
    display(h1);
    display(h2);
    
    
}

hr store() {
	hr h1;
    printf("\nEnter id: ");
    scanf("%d", &h1.id);
    printf("Enter name: ");
    scanf("%s", h1.name); 
    printf("Enter salary: ");
    scanf("%d", &h1.salary);
    printf("Enter commission: ");
    scanf("%d", &h1.commission);
    return h1;
}

void display(hr h)
{   
	printf("%d ",h.id);
	printf("%s ",h.name);
	printf("%d ",h.commission);
	printf("%d \n",h.salary);
}