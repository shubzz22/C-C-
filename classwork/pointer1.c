#include<stdio.h>
void main()
{
	int a=10;
	int* ptr=&a;//store the address of a in pointer ptr
	printf("%u\n",ptr);
	printf("%u\n",(ptr+0));
	printf("%u\n\n",(ptr+1));//address moves to 4 byte forward
	
	char aa='a'; //innitialize aa var
	char* ptr1=&aa; //store the address of aa in pointer ptr1 
	printf("%u\n",ptr1); //
	printf("%u\n",(ptr1+0)); //stay at same address
	printf("%u\n\n",(ptr1+1)); //address moves to 1 byte forward
	
	double ab=100;
	double* pt1=&ab;//store the address of ab in pointer pt1
	printf("%u\n",pt1);
	printf("%u\n",(pt1+0));
	printf("%u\n\n",(pt1+1));//address moves to 8 byte forward
	

	printf("%d",sizeof(int*));
}