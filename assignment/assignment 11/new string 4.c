//WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include <stdio.h>
#include <string.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character

    swapFirstAndLast(str);

    printf("String after swapping first and last characters: %s\n", str);

   
}

void swapFirstAndLast(char *str) {
    int length = strlen(str);

    // Check if the string has more than one character
    if (length > 1) {
        // Swap the first and last characters
        char temp = str[0];
        str[0] = str[length - 1];
        str[length - 1] = temp;
    }
}
