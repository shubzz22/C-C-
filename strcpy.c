//strcpy
#include<stdio.h>
#include<string.h>
char*  mystrcpy(char*,char*);
void main()
{
	char str[]="world";//two parameters required
	char des[20];
  char* ans=mystrcpy(des,str); //datatype type is char and char
	printf("%s",str);	
}
char* mystrcpy(char*des,char*str)
 {
  int i=0;
  while(str[i]!='\0')
  {
  	des[i]=str[i];
  	i++;
  }
  des[i]='\0';
  return des;
 }