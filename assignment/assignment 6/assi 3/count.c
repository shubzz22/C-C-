  #include<stdio.h>
  void   count(int* );
  void main()
  {
  	int no=1;
   count(&no);
  }
  
 void   count(int* no)
  {
  		while((*no)<=10)
  	{
  		printf("%d \n",(*no));
  		(*no)++;
	}
  }
