#include<stdio.h> 
int salary(int*);
void main()
{
		int basic=3000;
	
	    int res=salary(&basic);
	    printf("salary is %d",res);
       
}

int salary(int* basic)
{
	float da,ta,hra;
	float total_salary;
	if((*basic)<=5000)
	{
		da= (*basic)*15/100;
		ta=(*basic)*20/100;
		hra=(*basic)*30/100;
		
	}
	else{
		da=(*basic)*15/100;
		ta=(*basic)*25/100;
		hra=(*basic)*30/100;
		  
	}
		total_salary=(*basic)+da+ta+hra;
		return total_salary;
}
