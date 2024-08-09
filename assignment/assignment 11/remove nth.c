//WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;
  //fgets()
    printf("Enter a string: ");
  //  scanf("%s",str);
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Enter the index of the character to remove: ");
    scanf("%d", &n);

    removeNthIndex(str, n);

    printf("String after removing the character at index %d: %s\n", n, str);

    
}
void removeNthIndex(char* str, int n) {
    int length = strlen(str);

    
    if (n < 0 || n >= length) {
        printf("Invalid index.\n");
        return;
    }

    
    for (int i = n; i < length - 1; i++) {
        str[i] = str[i + 1];
    }
    
    str[length - 1] = '\0'; 
}


