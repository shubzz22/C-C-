#include<stdio.h>
void main()
{
	int year=1972;
	if((year%100==0 && year%400==0 ) || year%4==0)
	{
			printf("%d is a leap year \n",year);
			printf("no of days in feb month in year %d ids 29",year);
		}
	else
		{
		printf("%d is not a leap year",year);
		printf("no of days in feb month in year %d is 28",year);
	}
		
	
}
