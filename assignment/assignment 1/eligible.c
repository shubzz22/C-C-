#include<stdio.h>
void main()
{

char gender='m';
int age=18;


if((gender=='m' && age>=21) ||  (gender=='f' && age>=18))
{
printf(" is eligible to marry ");
}
else{
	printf(" then not eligible to marry");
}


}
