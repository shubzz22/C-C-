//time

typedef struct time{
	int hour;
	int min;
	int sec;
}time;

void main()
{
	time t1,t2;
	printf("enter the time \n");
	printf("please enter hour-");
	scanf("%d",&t1.hour);
	printf("enter  min-");
	scanf("%d",&t1.min);
	printf("enter sec-");
	scanf("%d",&t1.sec);
	printf("%d hour ",t1.hour);
	printf("%d min",t1.min);
	printf("%d sec\n",t1.sec);
	
	printf("enter the time2 \n");
	printf("please enter hour-");
	scanf("%d",&t2.hour);
	printf("enter  min-");
	scanf("%d",&t2.min);
	printf("enter sec-");
	scanf("%d",&t2.sec);
	

	printf("%d hour ",t1.hour);
	printf("%d min ",t1.min);
	printf("%d sec ",t1.sec);
	
}