//WAP to Take in Two Strings and Display the Larger String without Using Built-in  Functions

#include <stdio.h>

void main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s",str1);
    int len1 = strlen(str1);


    printf("Enter the second string: ");

   scanf("%s",str2);
    int len2 = strlen(str2);


    int result = compareStrings(str1, str2);

    if (result > 0) {
        printf("The larger string is: %s\n", str1);
    } else if (result < 0) {
        printf("The larger string is: %s\n", str2);
    } else {
        printf("Both strings are of the same length.\n");
    }

    
}
int compareStrings(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2) {
        return 1; 
    } else if (len1 < len2) {
        return -1; 
    } else {
        return 0; 
    }
}

int strlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}





