#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit";
	      char b1[]="FIRSTBIT";
	       int result=strcasecmp(a1,b1);
	       
	       if(result==0)
	       printf("strings are equal");
	       else if(result<0)
	       printf("string 2 is greater than");
	       else
	       printf("string 1 is greater ");
	      
}