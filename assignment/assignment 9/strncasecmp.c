#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit";
	      char b1[]="FIRST";
	       int result=strncasecmp(a1,b1,6);
	       printf("%d",result);
	       
	       if(result==0)
	       printf("the firstand second str char are equal");
	       else if(result<0)
	       printf("char of string 1 are less than str2");
	       else
	       printf("char of string 2 are less than str1");
	      
}