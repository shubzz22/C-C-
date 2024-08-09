//WAP to Remove the Characters of space Index Values in a String

#include <stdio.h>
#include <string.h>



void main() {
    char str[] = "sh u bha m ";
    
    printf("Original string: %s\n", str);
    removeSpaceIndexChars(str);
    printf("String with blank index characters replaced: %s\n", str);
    printf("%d",strlen(str));
}

	void removeSpaceIndexChars(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') 
		{
            str[i]='_';
        }
    }
     
}
