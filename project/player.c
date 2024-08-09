#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 50

typedef struct {
    int Jersey_No;
    char name[50];
    int Run;
    int Wickets;
    int Matches;
} Player;

Player players[MAX_PLAYERS];
int count = 0;

void addPlayerHardcoded(int jerseyNo, char* name, int runs, int wickets, int matches) {
    if (count >= MAX_PLAYERS) {
        printf("Maximum limit has been reached.\n");
        return;
    }
    Player player;
    player.Jersey_No = jerseyNo;
    strcpy(player.name, name);
    player.Run = runs;
    player.Wickets = wickets;
    player.Matches = matches;
    players[count] = player;
    count++;
}

void addPlayer() {
    if (count >= MAX_PLAYERS) {
        printf("Maximum limit has been reached.\n");
        return;
    }
    Player player;
    printf("Enter Jersey Number: ");
    scanf("%d", &player.Jersey_No);
    printf("Enter Player Name: ");
    scanf("%s", player.name);
    printf("Enter Total Runs Scored: ");
    scanf("%d", &player.Run);
    printf("Enter Total Wickets Taken: ");
    scanf("%d", &player.Wickets);
    printf("Enter Total Matches Played: ");
    scanf("%d", &player.Matches);
    players[count] = player;
    count++;
    printf("Player added successfully!\n");
}

void removePlayer() {
    int no;
    printf("Enter Jersey Number of player to remove: ");
    scanf("%d", &no);
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (players[i].Jersey_No == no) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                players[j] = players[j + 1];
            }
            count--;
            printf("Player removed successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Player with Jersey Number %d not found!\n", no);
    }
}

void searchPlayer() {
    int no;
    printf("Enter Jersey Number to search: ");
    scanf("%d", &no);
    for (int i = 0; i < count; i++) {
        if (players[i].Jersey_No == no) {
            printf("\n---------------------\n");
            printf("Jersey No: %d\n", players[i].Jersey_No);
            printf("Name: %s\n", players[i].name);
            printf("Total Runs Scored: %d\n", players[i].Run);
            printf("Total Wickets Taken: %d\n", players[i].Wickets);
            printf("Total Matches Played: %d\n", players[i].Matches);
            printf("\n---------------------\n");
            return;
        }
    }
    printf("Player with Jersey Number %d not found!\n", no);
}

void updatePlayer() {
    int no;
    printf("Enter Jersey Number of player to update: ");
    scanf("%d", &no);
    for (int i = 0; i < count; i++) {
        if (players[i].Jersey_No == no) {
            printf("Enter new total runs scored: ");
            scanf("%d", &players[i].Run);
            printf("Enter new total wickets taken: ");
            scanf("%d", &players[i].Wickets);
            printf("Enter new total matches played: ");
            scanf("%d", &players[i].Matches);
            printf("Player data updated successfully!\n");
            return;
        }
    }
    printf("Player with Jersey Number %d not found!\n", no);
}

void displaySortedplayer() {
    for (int i = 0; i <count - 1; i++) {
        for (int j = i + 1; j <count; j++) {
            if (players[i].Run< players[j].Run) {
                Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    printf("Players sorted by Run :\n");
    for (int i = 0; i < count; i++) {
        printf("\n---------------------\n");
        printf("Jersey No: %d\n", players[i].Jersey_No);
        printf("Name: %s\n", players[i].name);
        printf("Total Runs Scored: %d\n", players[i].Run);
        printf("Total Wickets Taken: %d\n", players[i].Wickets);
        printf("Total Matches Played: %d\n", players[i].Matches);
        printf("\n---------------------\n");
    }
}

void displayTop3player() {
    for (int i = 0; i <count - 1; i++) {
        for (int j = i + 1; j <count; j++) {
            if (players[i].Wickets< players[j].Wickets) {
                Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    printf("Top 3 Players sorted by wickets :\n");
    for (int i = 0; i < 3; i++) {
        printf("\n---------------------\n");
        printf("Jersey No: %d\n", players[i].Jersey_No);
        printf("Name: %s\n", players[i].name);
        printf("Total Runs Scored: %d\n", players[i].Run);
        printf("Total Wickets Taken: %d\n", players[i].Wickets);
        printf("Total Matches Played: %d\n", players[i].Matches);
        printf("\n---------------------\n");
    }
}

void displayPlayers() {
    for (int i = 0; i < count; i++) {
        printf("\n---------------------\n");
        printf("Jersey No: %d\n", players[i].Jersey_No);
        printf("Name: %s\n", players[i].name);
        printf("Total Runs Scored: %d\n", players[i].Run);
        printf("Total Wickets Taken: %d\n", players[i].Wickets);
        printf("Total Matches Played: %d\n", players[i].Matches);
        printf("\n---------------------\n");
    }
}

int main() {
    // Adding hardcoded players
    addPlayerHardcoded(7, "Dhoni", 5000, 20, 100);
    addPlayerHardcoded(8, "Jadeja", 4500, 150, 90);
    addPlayerHardcoded(18, "Virat", 5500, 220, 110);
    int choice;

    do {
        printf("Please enter the choice:\n");
        printf("0. Exit\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
		printf("6. Display sorted players\n");
		printf("7. Display Top 3 players\n");
        printf("Choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 0:
                return 0;
            case 1:
                addPlayer();
                break;
            case 2:
                removePlayer();
                break;
            case 3:
                searchPlayer();
                break;
            case 4:
                updatePlayer();
                break;
            case 5:
                displayPlayers();
                break;
            case 6:
            	displaySortedplayer();
            	break;
            case 7:
            	displayTop3player();
            default:
                printf("Please enter a correct option.\n");
        }
    } while (choice != 0);

    return 0;
}
