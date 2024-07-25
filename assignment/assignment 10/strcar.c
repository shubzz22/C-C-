#include<stdio.h>
#include<string.h>
void mycar(char* ,char*);
void main()
{
	char a[50]="hello guys my name is !!";
	char b[]=" shubham";
	mycar(a,b);
}

void mycar(char* a,char*b)
 {
 	//printf("%d\n",strlen(a));
 	int i=0,j=0;
 	int count=0;
 	while(a[i]!='\0')
 	{
 		count++;
 		i++;
	}
	printf("%d\n",count);
	while(b[j]!='\0')
 	{
 	a[i]=b[j];
 	i++;
 	j++;
	}
        printf("%s",a); 
 }              