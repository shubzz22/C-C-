#include<stdio.h>
void table(int*);
void main()
{
	int a=5;
	printf("enter integer:  \n");
	table(&a);
	
}
  void table(int* a)
   {
   	int sum;
	
	int i=1;
	while(i<=10){
		sum=i*(*a);
		printf("%d * %d = %d \n",i,(*a),sum);
		i++;
	}
   }
