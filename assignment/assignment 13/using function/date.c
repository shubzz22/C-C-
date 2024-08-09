#include<stdio.h>

typedef struct date
{
	int day;
	char month[20];
	int year;
}date;

date store();
void main()
{
	printf("enter the date of birth \n");
	date d1;
	d1=store();
	display(d1);
}

 date store()
 {
 	date d;
	printf("enter the day ");
	scanf("%d",&d.day);
	printf("enter month ");
	scanf("%s",d.month);
	printf("enter year ");
	scanf("%d",&d.year);
	return d;
 }
 
 void display(date d)
 {
 
 	printf("%d ",d.day);
	printf("%s ",d.month);
	printf("%d ",d.year);
 }