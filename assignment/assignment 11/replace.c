//WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>

void main()
{
	printf("enter the string\n");
	char a[100];
	scanf("%s",&a);
	
//	printf("%s",a);
	
	char ch='$';
//	scanf("%c",&ch);
	printf("%c to replce from all occured a\n",ch);
	int index=	mystrchr(a,ch);
    printf("the index of %c in %s is %d",ch,a,index);
}
  int mystrchr(char* a,char* ch)
    {
    	int i=0;
    	while(a[i]!='\0')
    	{
    		if(a[i]=='a')
    		{
    			a[i]=ch;
    			
			}
			i++;
			
		}
	
}