#include<stdio.h>
#include<string.h>
int mystrcmp (char* ,char*);
void main()
{
	
	char str[]="firstbit";
	char str1[]="FIRSTBIT";
 	int ans=mystrcmp(str,str1);
 	printf("%d",ans);
	
}
int mystrcmp (char* str,char* str1)
{
	int i=0;
	int c;
	while(str[i]!='\0')
	{
		if(str[i]==str1[i])
		c=0;
		else if(str[i]>str1[i])
		c=1;
		else 
		c=-1 ;
		i++;
			
	}
	return c;
}