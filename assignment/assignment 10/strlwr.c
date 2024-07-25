#include<stdio.h>
#include<string.h>
char* mystr(char* ,char* );
void main()
{
	char a[]="SHUBHAM";
	char b[20];
	char* s= mystr(a,b);
	printf("%s",s);
}
char* mystr(char* a,char* b)
	{
		int i=0;
		while(a[i]!='\0')
		{
			
			b[i]=a[i]+32;
			
			i++;
		}
		return b;
	}