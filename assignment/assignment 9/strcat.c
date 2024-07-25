#include<stdio.h>
#include<string.h>
//strcat concatenates (joins) two strings

void main()
{
	char str[20]="hello";
	char str1[5]="world!!";
	strcat(str,*str1);
	printf("%s",str);
}


