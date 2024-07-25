#include<stdio.h>
#include<string.h>

void main()
{
	      char a1[]="firstbit";
	      char a2[]="bit";
	      mystr(a1,a2);
	      
	      
}

 void	mystr(char* a1,char* a2)
 	{
 	for(int i=0;i<strlen(a1);i++){
	 
	// printf("%d",strlen(a1));
 	
 		for(int j=0;j<strlen(a2);j++)
 		{
		 
 			if(a1[i+j]!=a2[j])
 			break;
 			if(j==strlen(a2))
 			{
			 printf("\nsubdtring found at index %d",i);
 			break;
		    } 
		 }
	}
		 }
		 	
	