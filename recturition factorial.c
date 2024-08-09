// factorial using recurction

#include <stdio.h>
void main()
{
	int a=5;
	   fun1(a);
	   printf("%d",fun1(a));     
  }
 int fun1(int a)
{
     

	if (a==0)
	{
 		return 1;  
    }
else
{

return a*fun1(a-1);
}


}
    
