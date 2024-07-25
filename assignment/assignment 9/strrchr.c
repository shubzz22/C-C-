#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit solutions";
	      char *ptr=strrchr(a1,'i');
	      printf("%d",ptr-a1);
	      
}