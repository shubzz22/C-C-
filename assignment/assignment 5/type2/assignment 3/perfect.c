 #include<stdio.h>
 int perfect();
 void main()
 {
 int sum =perfect();
  if(sum==1)
  printf("perfrct number");
  else
  printf("not perfect");	
 }
 
int	perfect()
	{
		int i=1,num=6,sum=0;
 	
 	
 	
 	while(i<num)
 	{
 		if(num%i==0)
 		
 			sum=sum+i;
 			i++;
		  
	 }
	 
	 if(sum==num)
	 return 1;
	 else
	 return 0;
	}
