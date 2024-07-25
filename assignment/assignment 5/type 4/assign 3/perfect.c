 #include<stdio.h>
int perfect(int );
 void main()
 {
 	int num=6;
 	int ans=perfect(num);
 	if(ans==1)
 	printf("perfrct number");
 	else
 	printf("not perfect");
 	
 }
 
 int perfect(int num)
 {  
	int i=1,sum=0;
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
