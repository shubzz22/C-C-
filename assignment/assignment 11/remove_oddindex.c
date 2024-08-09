//WAP to Remove the Characters of Odd Index Values in a String


#include <stdio.h>
#include <string.h>

void main() {
    char str[100];

    printf("Enter a string: ");

	 scanf("%s",str);

    removeOddIndexChar(str);

    printf("String after removing characters at odd index values: %s\n", str);

    
}
void removeOddIndexChar(char* str) {
    int length = strlen(str);
    int j = 0;
    
    for (int i = 0; i < length; i++) {
        
        if (i % 2 == 0) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0'; 
}



