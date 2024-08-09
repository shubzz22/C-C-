#include<stdio.h>
#include<stdlib.h>
typedef struct Player{
	int Jersey_No;
	char name[50];
	int Run;
	int Wickets;
	int Matches;
	
}Player;

void display_data(Player*,int);
void search_player(Player* ,int );
void main()
{
	int size;
	printf("Enter how many player data you want to store~:");
	scanf("%d",&size);

Player player[size]; 
int choice;                                           
	store_data(player,size);
	
	while(choice!=0){
	
	printf("Please!!enter the choice:\n");
	printf("0.Exit\n");
	printf("1.Add Player\n");
	printf("2.Remove Player\n");
	printf("3.search Player\n");
	printf("4.Update Player\n");
	printf("5.Display player\n");

	printf("choice::");
	scanf("%d",&choice);
	printf("\n");
	
switch(choice)
	{
		case 0:
			return;
		case 1:
			store_data( player, size);
			
		case 2:
			
			break;
		case 3:
			search_player( player, size);
			break;                
		case 4:
			
			break;
		case 5:
			display_data(player,size);
			break;           
		default:
		printf("please enter correct option\n");
	}
}
free(player);
}


 void store_data(Player* player,int size)	{                       
	{
		for(int i=0;i<size;i++){
		
			printf("enter Name Of Player -");
			scanf("%s",&player[i].name);
			printf("enter Total runs Scored -");
			scanf("%d",&player[i].Run);
			printf("enter Wickets -");
			scanf("%d",&player[i].Wickets); 
			printf("enter Matches_Played -");
			scanf("%d",&player[i].Matches);
			
	}
	}
	
	void search_player(Player* player,int size)
	{                                     
		int choice;
		printf("please select the option by which you want to search player\n");
		printf("0.Main menu\n");
		printf("1.Jersy No\n");
		printf("2.Name\n\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 0:
				return;
			case 1:
		 searchbyjersy(player,  size);
				                    
				break;
			case 2:
		 searchbyname( player, size);
				break;               
			default:
			printf("please enter correct choice!!\n\n");
			printf("---------------------\n");
		}
	 } 
	 
void searchbyjersy(Player * player,int  size)
	 {                                    
	 	int no;
	 	printf("please enter the jersy no:");
				scanf("%d",&no);
				for(int i=0;i< size;i++)
				{             
					if(player[i].Jersey_No==no)
					{
						printf("jercy no-%d\n",player[i].Jersey_No);
						printf("Name-%s\n",player[i].name);
						printf("Matche-%d\n",player[i].Matches);
						printf("Run-%d\n",player[i].Run);
						printf("Wickets-%d\n",player[i].Wickets);
					}
					
	 
void searchbyname(Player* player,int  size)
	 {                                           
	 	char nm[20];                      
	 	printf("please enter the Name of player:");
				scanf("%s",nm);
				
				for(int i=0;i< size;i++)
				{             
				if(player[i].name==nm)
					{
						printf("jercy no-%d\n",player[i].Jersey_No);
						printf("Name-%s\n",player[i].name);
						printf("Matche-%d\n",player[i].Matches);
						printf("Run-%d\n",player[i].Run);
						printf("Wickets-%d\n",player[i].Wickets);
					}
				}
	 }
	 
	 

	
void display_data(Player* player,int  size)
	{                                   
		for(int i=0;i< size;i++)
		{             
			printf("\n---------------------\n");
			printf("Jersy No:%d\n",player[i].Jersey_No);
			printf("name:%s\n",player[i].name);
			printf("Total Runs Scored:%d\n",player[i].Matches);
			printf("Total Wickets Taken:%d\n",player[i].Run);
			printf("Total Matches Played:%d\n",player[i].Wickets);
			printf("\n---------------------\n");
			
		}
	}
	
	