#include<stdio.h>
void main()
{
int c=	eligible();
 if(c==1)
printf(" is eligible to marry ");
else
printf(" then not eligible to marry");

}
 int eligible()
  {
  	char gender='m';
int age=18;


if((gender=='m' && age>=21) ||  (gender=='f' && age>=18))
{
	return 1;
}
else{
	return 0;
}

  }
