#include<stdio.h>

typedef struct hr {
    int id;
    char name[20];
    int salary;
    int commission;
} hr;

// Function prototype
hr store();

void main() {
    hr h1,h2;
     h1 = store();
    display();
    
     h2 = store();
    display();
    
}

hr store() {
	hr h;
    printf("\nEnter id: ");
    scanf("%d", &h.id);
    printf("Enter name: ");
    scanf("%s", h.name); 
    printf("Enter salary: ");
    scanf("%d", &h.salary);
    printf("Enter commission: ");
    scanf("%d", &h.commission);
    return h;
}

void display()
{   hr h;
	printf("%d ",h.id);
	printf("%s ",h.name);
	printf("%d ",h.commission);
	printf("%d ",h.salary);
}