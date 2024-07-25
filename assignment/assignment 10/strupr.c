#include<stdio.h>
#include<string.h>
char* mystr(char* );
void main()
{
	char a[]="shubham";
	char* s= mystr(a);
	printf("%s",s);
}
char* mystr(char* a)
	{
		int i=0;
		while(a[i]!='\0')
		{
			
			a[i]=a[i]-32;
			
			i++;
		}
		return a;
	}