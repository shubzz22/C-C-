#include<stdio.h>

typedef struct date
{
	int day;
	char month[20];
	int year;
}date;

void 	store(date* dob,int n);
void	display(date* dob,int n);


void main()
{
	int size;
	printf("enter size of array-");
	scanf("%d",&size);

	date dob[size];
	store(dob,size);
	printf("\n\nthe date of birth are-- \n");
	display(dob,size);
	

	
}
void 	store(date* dob,int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("enter the %d date \n",i+1);
			printf("enter the day-");
			scanf("%d",&dob[i].day);
			printf("enter month(in char)- ");
			scanf("%s",dob[i].month);
			printf("enter year-");
			scanf("%d",&dob[i].year);
		}
	}
	
void	display(date* dob,int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("\n----------------------\n");
				printf("day-%d\n",dob[i].day);
				printf("month-%s\n",dob[i].month);
				printf("year-%d\n",dob[i].year);
			printf("\n----------------------\n");
		}
	}