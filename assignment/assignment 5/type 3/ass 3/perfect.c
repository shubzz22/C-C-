 #include<stdio.h>
 void main()
 {
 	
 	
 	int num=6;
 	perfect(num);
 	
 }
 
 perfect(int num)
 {  
	int i=1,sum=0;
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
