#include<stdio.h>
void main()
{
	int year=2003;
int ans=(year%400==0) && (year%100==0 ) || (year%4==0) ;
//int a=year/100;
//int ans=(year/100==0 && a%4==0);

printf("if ans is 1 year is leap year\n");
printf("if ans is 0 year is not leap year\n");
printf("ans = %d",ans);



}
