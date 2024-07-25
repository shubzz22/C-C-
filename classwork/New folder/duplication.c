#include<stdio.h>
void main()
{
	
	//int arr[1000];
int	arr[7]={1,2,3,2,3,1,23};
int count=1;
	 for(int i=0;i<7;i++)
	 {
	 	count =1;
	 //	printf("%d",arr[i]);
	 for(int j=i+1;j<7;j++)
	 {
	 	if(arr[i]==arr[j])
	 	count++;
	 }
	 if(arr[i]==arr[i])
	 printf("%d ""%d\n",arr[i],count);
	 }
	 
	 
	 
	 
	 
	 
	 for(int i=0;i<7;i++)
	 {
	 	int count =0;
	 //	printf("%d",arr[i]);
	 for(int j=i+1;j<7;j++)
	 {
			if(arr[i]==arr[j]){
			
			count++;
}
	 }
	if(count==0)
	 printf("\n%d\n",arr[i]);
	 }
}