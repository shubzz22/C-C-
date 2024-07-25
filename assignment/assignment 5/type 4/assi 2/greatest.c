#include<stdio.h>
int greatest(int ,int ,int );
void main()
{
	int a=30;
	int b=20;
	int c=50;
int res=greatest(a,b,c);
printf("%d is gretest number",res);
   
}
int greatest(int a,int b,int c)
{
	if(a>b && a>c)
{
		return a;	
}
else if (b>a && b>c)
{
	return b;
}
else{
return c;
}

}
