#include<stdio.h>
int res(char,int);
void main()
{

char gender='m';
int age=18;
int ans=res(gender,age);
if(ans==1)
printf(" is eligible to marry ");
else
printf(" then not eligible to marry");

}
res(char gender,int age)
{
	if((gender=='m' && age>=21) ||  (gender=='f' && age>=18))
{
    return 1;
}
else
{
	return 0;
}

}
