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
  	int len=0;
  	while(str[i]!='\0')
  	{
  		len++;
  		i++;
	  }
	  return len;
  }