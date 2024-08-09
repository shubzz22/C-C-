//hr(id,name,salary,incentive,target)

	struct salesmanager
	{
		int id;
		char name[30];
		int salary;
		int incentive;
		int target;
		
	};
	
	void main()
	{
		printf("salesmanager 1:\n");
		struct salesmanager s1,s2;
		printf("id:");
		scanf("%d",&s1.id);
		printf("name:");
		scanf("%s",s1.name);
		printf("incentive");
		scanf("%d",&s1.incentive);
		printf("target");
		scanf("%d",&s1.target);
		printf("salary");
		scanf("%d",&s1.salary);
		
		printf("id-%d " "name-%s " "incentive-%d " "target-%d""salary-%d \n",s1.id,s1.name,s1.incentive,s1.target,s1.salary);
		
		s2.id=2;
		s2.incentive=100;
//		h2.name="shubham";
		strcpy(	s2.name,"shubham");
		s2.salary=1000;
		s2.target=3;
		printf("salesmanager 2:\n");
		printf("id-%d ",s2.id);
		printf("name-%s ",s2.name);
		printf("incentive-%d ",s2.incentive);
		printf("target-%d ",s2.target);
		printf("salary-%d ",s2.salary);
	}