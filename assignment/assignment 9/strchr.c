#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="mozecollege";
	char ch='e';
	char* res=strchr(str,ch);
	if(res!=NULL)
	{
		printf("the ch is presmt at %d",res-str);
	}
    else
    {
    	printf("it is not present");
	}
}