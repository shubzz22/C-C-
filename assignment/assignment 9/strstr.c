#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit solutions";
	      char a2[]="bt";
	      char* result=strstr(a1,a2);
	     
	      
	      if(result != NULL)
	      {
	      	printf("substring found");
	      	
		  }
		  else
		  {
		  	printf("substring not found");
		  }
}