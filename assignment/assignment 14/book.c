//Create a structure Book with data members as bname, id, author, price. Accept the values of all these members from user and display them

#include <stdio.h>

typedef struct Book {
    char bname[100];
    int id;
    char author[100];
    float price;
}Book;

void main() {
     Book book;

    printf("Enter the book name: ");
    fgets(book.bname, sizeof(book.bname), stdin);

    printf("Enter the book ID: ");
    scanf("%d", &book.id);

    printf("Enter the author's name: ");
//    getchar(); 
//    fgets(book.author, sizeof(book.author), stdin);
    scanf("%s",book.author);

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);

    printf("\nBook Details:\n");
    printf("Book Name: %s", book.bname);
    printf("ID: %d\n", book.id);
    printf("Author: %s", book.author);
    printf("Price: Rupess%f\n", book.price);

    
}
