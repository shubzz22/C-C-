#include<stdio.h>

typedef struct salesm
	{
		int id;
		char name[30];
		int salary;
		int incentive;
		int target;
		
	}salesm;
	
	salesm store();
	
	void  main()
	{
		salesm s1;
		s1=store();
		display(s1);
	}
    salesm store()
    
	{
		salesm s;
		printf("enter id-");
		scanf("%d",&s.id);
		printf("enter name-");
		scanf("%s",&s.name);
		printf("enter salary-");
		scanf("%d",&s.salary);
		
		printf("enter incentive-");
		scanf("%d",&s.incentive);
		printf("enter target-");
		scanf("%d",&s.target);
		return s;
		
} 
	 display(salesm s)
	{
			
		printf("%d ",s.id);
		printf("%s ",s.name);
		printf("%d ",s.salary);
		printf("%d ",s.incentive);
		printf("%d ",s.target);
	}