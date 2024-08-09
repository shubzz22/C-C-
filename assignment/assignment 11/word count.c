//WAP to Count the Number of words in a String

#include<stdio.h>
#include<string.h>
void main()

{
	char str[]="12345shubham";
		int len=mystrlen(str);
			int count=0;
	for(int i=0;i<len;i++)
	{
	
		
			if(str[i]>64&& str[i]<125)
			count++;
			
	}
		printf(" the number of words in the given string is %d",count);
}
	

	int mystrlen(char* str)
  {
  	int i=0;
  	int len=0;
  	while(str[i]!='\0')
  	{
  		len++;
  		i++;
	  }
	  return len;
  }


	