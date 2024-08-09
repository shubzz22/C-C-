//time

typedef struct time{
	int hour;
	int min;
	int sec;
}time;

 time store();
void main()
{
	time t1,t2;
    t1=store();
    t2=store();
    display(t1);
    display(t2);
	
	
}
 time store()
	{
	time t1;
	printf("enter the time \n");
	printf("please enter hour-");
	scanf("%d",&t1.hour);
	printf("enter  min-");
	scanf("%d",&t1.min);
	printf("enter sec-");
	scanf("%d",&t1.sec);
	return t1;
	}
	
   void display(time t1)
	{
	printf("%d hour ",t1.hour);
	printf("%d min",t1.min);
	printf("%d sec\n",t1.sec);
	
	}