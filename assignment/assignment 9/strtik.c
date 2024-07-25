#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="first.bit,solutions";
	      char delimeters[]=".,";
	      char * token=strtok(a1,delimeters);
	      while(*token!='\0')
	      {
	      	printf("%s\n",token);
	      	token=strtok('\0',delimeters);
		  }
	      
}