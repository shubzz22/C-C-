#include<stdio.h>

typedef struct salesm
	{
		int id;
		char name[30];
		int salary;
		int incentive;
		int target;
		
	}salesm;
	
	void store(salesm* ,int );
	
	void  main()
	{
		int n;
		printf("enter the size of arr-");
		scanf("%d",&n);
		salesm sarr[n];//sarr[i]
		store(sarr,n);
		display(sarr,n);
	}
    
	void store(salesm* sarr,int n)
    
	{
		for(int i=0;i<n;i++)
		{
		
		printf("%d salesmanager\n",i+1);
		printf("enter id-");
		scanf("%d",&sarr[i].id);
		printf("enter name-");
		scanf("%s",&sarr[i].name);
		printf("enter salary-");
		scanf("%d",&sarr[i].salary);
		
		printf("enter incentive-");
		scanf("%d",&sarr[i].incentive);
		printf("enter target-");
		scanf("%d",&sarr[i].target);
	}
		
} 
	void display(salesm* sarr,int n)
	{
		for(int i=0;i<n;i++)	
	{
		printf("\n--------------------\n");
		printf("id-%d\n",sarr[i].id);
		printf("name-%s\n",sarr[i].name);
		printf("salary-%d\n",sarr[i].salary);
		printf("incentive-%d \n",sarr[i].incentive);
		printf("target-%d\n",sarr[i].target);
		printf("\n--------------------\n");
	}
}