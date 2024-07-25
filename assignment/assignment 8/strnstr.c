#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit solutions offers";
	      char b1[]="so";
	      int n=20;
	      
	      int result=strnstr(a1,b1,n);
	       
	       if(result)
	       printf("substring found at position at %ld",result);
	       else
	       printf("substring not found ");
	      
}