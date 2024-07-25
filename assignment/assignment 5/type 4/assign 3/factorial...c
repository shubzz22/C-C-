#include<stdio.h>
int fact(int);
void main()
{
	int no;
	int sum;
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
{
		
     sum=fact(no);
    
}
printf("%d",sum);
}

  int 	fact(int no)
	{
	int	i=1,factorial=1;

    for(i=1;i<=no;i++)
   {
	factorial=factorial*i;
	
     }
return factorial;
	}
