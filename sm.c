#include<stdio.h>
int a=90;

void main()
{
char s[]="sjf-fd0f-fjof";
char *tok=strtok(s,"-");
while(tok!='\0')
{
	printf("%s\n",tok);
	tok=strtok('\0',"-");
}
}