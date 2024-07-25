 #include<stdio.h>
 void main()
 {
 	int i=1,num,sum=0;
 	num=6;
 	
 	while(i<num)
 	{
 		if(num%i==0)
 		
 			sum=sum+i;
 			i++;
		  
	 }
	 
	 if(sum==num)
	 printf("perfrct number");
	 else
	 printf("not perfect");
 }
