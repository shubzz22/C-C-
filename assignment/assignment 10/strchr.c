#include<stdio.h>
#include<string.h>
int  mystrchr(char* ,char* );
void main()
{
	char str[]="mozecollege";
	char ch='e';
    int index=	mystrchr(str,ch);
    printf("the index of %c in %s is %d",ch,str,index);
}
  int mystrchr(char* str,char* ch)
    {
    	int i=0;
    	while(str[i]!='\0')
    	{
    		if(str[i]==ch)
			return i;
			i++;
				
				}
	
	}