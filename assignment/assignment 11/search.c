//Write a program to scan string from user then scan a single character and search it in a accepted string

#include<stdio.h>


void main()
{
	printf("enter the string\n");
	char a[100];
	scanf("%s",&a);
	
//	printf("%s",a);
	
	char ch='m';
//	scanf("%c",&ch);
	printf("%c to seacrch\nh",ch);
	int index=	mystrchr(a,ch);
    printf("the index of %c in %s is %d",ch,a,index);
}
  int mystrchr(char* a,char* ch)
    {
    	int i=0;
    	while(a[i]!='\0')
    	{
    		if(a[i]==ch)
			return i;
			i++;
			
				
				}
	
}