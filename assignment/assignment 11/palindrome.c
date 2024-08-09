//Write a program to check the string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="sees";
	isPalindrome(str);
 		if(isPalindrome(str))
			 printf(" palindrome");
 			else
			printf("not palindrome");
}

	 int isPalindrome(char str[])
	 {
		int len=strlen(str);
		for(int i=0;i<len/2;i++)
		{
	
			if(str[i]!=str[len-i-1])
   			 {
    			return 0;
			 }
				else
				return 1;
		}
	 }