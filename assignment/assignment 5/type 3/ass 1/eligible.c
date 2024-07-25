#include<stdio.h>
void eligible(char,int);
void main()
{

char gender='m';
int age=18;
eligible(gender,age);

}

void eligible(char gender,int age)
{
	
if((gender=='m' && age>=21) ||  (gender=='f' && age>=18))
{
printf(" is eligible to marry ");
}
else{
	printf(" then not eligible to marry");
}
}
