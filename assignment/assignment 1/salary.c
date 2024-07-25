#include<stdio.h> 

int main()
{
	int basic=3000;
	float da,ta,hra;
	float total_salary;
	if(basic<=5000)
	{
		da= basic*15/100;
		ta=basic*20/100;
		hra=basic*30/100;
		
	}
	else{
		da=basic*15/100;
		ta=basic*25/100;
		hra=basic*30/100;
		  
	}
		total_salary=basic+da+ta+hra;
		printf("da is %f \n",da);
		printf("ta is %f \n", ta);
		printf("hra is %f \n",hra);
			
		printf("total salary %f \n",total_salary);
}
