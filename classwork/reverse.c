int main()
{
	int num=345567;
	int r1=num%10; //7
	int q1=num/10;
	
	int r2=q1%10; //6
	int q2=q1/10; //3455
	
	int r3=q2%10 ; //5
	int q3=q2/10; //345
	
	int r4=q3%10; //5
	int q4=q3/10;
 
 int r5=q4%10; //4
 int q5=q4/10; //3
  
	
	int reverse=(100000*r1)+(10000*r2)+(1000*r3)+(100*r4)+(10*r5)+(1*q5);
	printf("%d",reverse);
}
