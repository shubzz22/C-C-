//WAP to Count the Number of Vowels in a String

#include<stdio.h>

void main()

{

	char str[]="firstbitsloutions";
	int len=strlen(str);
		int count=0;
	for(int i=0;i<len;i++)
	{
	
		
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			count++;
			
		
	
	}
		printf(" the number of vowels in the given string is %d",count);
}