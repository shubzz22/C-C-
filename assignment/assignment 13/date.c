#include<stdio.h>

typedef struct date
{
	int day;
	char month[20];
	int year;
}date;

void main()
{
 	date d;
	printf("enter the date of birth \n");
	printf("enter the day ");
	scanf("%d",&d.day);
	printf("enter month ");
	scanf("%s",d.month);
	printf("enter year ");
	scanf("%d",&d.year);
	
	
	printf("%d ",d.day);
	printf("%s ",d.month);
	printf("%d ",d.year);
	
}