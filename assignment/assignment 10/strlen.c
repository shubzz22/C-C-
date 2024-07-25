  #include<stdio.h>
  #include<string.h>
  int mystrlen(char*);
  void main()
  {
  	char str[]="hello";
    int n=mystrlen(str);
    printf("%d",n);
    
  }
  int mystrlen(char* str)
  {
  	int i=0;
  	int count=0;
  	while(str[i]!='\0')
  	{
  		count++;
  		i++;
	  }
	  return count;
  }