//time

typedef struct time{
	int hour;
	int min;
	int sec;
}time;

void store(time* ,int );
 void display(time*,int );
void main()
{
	int n;
	printf("enter the size of arr-");
	scanf("%d",&n);
	time Time[n];
    store(Time,n); //Time[i]
    
    display(Time,n);
	
	
}
 void store(time* Time,int n)
	{
		for(int i=0;i<n;i++)
		{
				printf("enter Time %d\n",i+1);
			
				printf("please enter hour-");
				scanf("%d",&Time[i].hour);
				printf("enter  min-");
				scanf("%d",&Time[i].min);
				printf("enter sec-");
				scanf("%d",&Time[i].sec);
		}

	}
	
   void display(time* Time,int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("\n--------------------------\n");
			printf("%d hour\n",Time[i].hour);
			printf("%d min\n",Time[i].min);
			printf("%d sec\n",Time[i].sec);
			printf("\n--------------------------\n");
		}
	
	}