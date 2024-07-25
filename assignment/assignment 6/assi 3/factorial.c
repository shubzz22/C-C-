#include<stdio.h>
void main()
{
	int no;
	
	scanf("%d",&no);
	
    fact(&no);

}

   void	fact(int* no)
	{
	int	i=1,factorial=1;

    for(i=1;i<=(*no);i++)
   {
	factorial=factorial*i;
	
     }
printf("factorial is %d",factorial);
	}
