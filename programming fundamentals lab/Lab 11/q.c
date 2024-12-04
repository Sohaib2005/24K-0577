#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_PLAYERS 5

struct player{
char name[20];
char team[20];
};

struct bowl{
char type[10]; // seemer, pacer, spinner// N/A
char arm[5]; //left or right
struct player ply;
};

typedef struct bat{
char type[10]; // top order, middle order, lower order
char handed[8]; //lefty or righty
struct bowl ply2;
}bat;
void create_record() {
    FILE *file = fopen("players.txt", "a"); // Open in append mode
    if (!file) {
        perror("Error opening file");
        return;
    }

    struct bat new_player;

    // Input player details
    printf("Enter player name: ");
    scanf("%s", new_player.ply2.ply.name);
    printf("Enter player team: ");
    scanf("%s", new_player.ply2.ply.team);
    printf("Enter bowler type (seamer/pacer/spinner/N/A): ");
    scanf("%s", new_player.ply2.type);
    printf("Enter bowler arm (left/right/N/A): ");
    scanf("%s", new_player.ply2.arm);
    printf("Enter batter type (top/middle/lower/N/A): ");
    scanf("%s", new_player.type);
    printf("Enter batter handedness (lefty/righty/N/A): ");
    scanf("%s", new_player.handed);

    // Write the new record to the file
    fprintf(file, "%s %s %s %s %s %s\n", 
            new_player.ply2.ply.name, new_player.ply2.ply.team,
            new_player.ply2.type, new_player.ply2.arm, 
            new_player.type, new_player.handed);

    printf("Player record created successfully.\n");
    fclose(file); // Close the file
}
void read_records() {
    FILE *file = fopen("players.txt", "r"); // Open in read mode
    if (!file) {
        perror("Error opening file");
        return;
    }

    struct bat player;
    printf("\nPlayer Records:\n");
    while (fscanf(file, "%s %s %s %s %s %s", 
                  player.ply2.ply.name, player.ply2.ply.team, 
                  player.ply2.type, player.ply2.arm, 
                  player.type, player.handed) != EOF) {
        printf("\nPlayer Details:\n");
        printf("  Name          : %s\n", player.ply2.ply.name);
        printf("  Team          : %s\n", player.ply2.ply.team);
        printf("  Bowler Type   : %s\n", player.ply2.type);
        printf("  Bowler Arm    : %s\n", player.ply2.arm);
        printf("  Batter Type   : %s\n", player.type);
        printf("  Batter Handed : %s\n", player.handed);
    }

    fclose(file); // Close the file
}
void update_record() {
    FILE *file = fopen("players.txt", "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    struct bat players[MAX_PLAYERS];
    int count = 0;

    // Read all records into memory
    while (fscanf(file, "%s %s %s %s %s %s", 
                  players[count].ply2.ply.name, players[count].ply2.ply.team, 
                  players[count].ply2.type, players[count].ply2.arm, 
                  players[count].type, players[count].handed) != EOF) {
        count++;
    }
    fclose(file);

    int index;
    printf("Enter the player index (0 to %d) to update: ", count - 1);
    scanf("%d", &index);
    if (index < 0 || index >= count) {
        printf("Invalid index.\n");
        return;
    }

    // Update the record
    printf("Updating record for %s...\n", players[index].ply2.ply.name);
    printf("Enter new player team: ");
    scanf("%s", players[index].ply2.ply.team);
    printf("Enter new bowler type: ");
    scanf("%s", players[index].ply2.type);
    printf("Enter new bowler arm: ");
    scanf("%s", players[index].ply2.arm);
    printf("Enter new batter type: ");
    scanf("%s", players[index].type);
    printf("Enter new batter handedness: ");
    scanf("%s", players[index].handed);

    // Write all records back to the file
    file = fopen("players.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %s %s %s %s %s\n", 
                players[i].ply2.ply.name, players[i].ply2.ply.team, 
                players[i].ply2.type, players[i].ply2.arm, 
                players[i].type, players[i].handed);
    }

    printf("Player record updated successfully.\n");
    fclose(file);
}
void delete_record() {
    FILE *file = fopen("players.txt", "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    struct bat players[MAX_PLAYERS];
    int count = 0;

    // Read all records into memory
    while (fscanf(file, "%s %s %s %s %s %s", 
                  players[count].ply2.ply.name, players[count].ply2.ply.team, 
                  players[count].ply2.type, players[count].ply2.arm, 
                  players[count].type, players[count].handed) != EOF) {
        count++;
    }
    fclose(file);

    int index;
    printf("Enter the player index (0 to %d) to delete: ", count - 1);
    scanf("%d", &index);
    if (index < 0 || index >= count) {
        printf("Invalid index.\n");
        return;
    }

    // Remove the record by skipping it during writing
    file = fopen("players.txt", "w");
    for (int i = 0; i < count; i++) {
        if (i != index) {
            fprintf(file, "%s %s %s %s %s %s\n", 
                    players[i].ply2.ply.name, players[i].ply2.ply.team, 
                    players[i].ply2.type, players[i].ply2.arm, 
                    players[i].type, players[i].handed);
        }
    }

    printf("Player record deleted successfully.\n");
    fclose(file);
}



void create_record();
void read_records();
void update_record();
void delete_record();

int main() {
    int choice;
    while (1) {
        printf("\nCricket Player Management System\n");
        printf("1. Create Player Record\n");
        printf("2. Read All Player Records\n");
        printf("3. Update Player Record\n");
        printf("4. Delete Player Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_record();
                break;
            case 2:
                read_records();
                break;
            case 3:
                update_record();
                break;
            case 4:
                delete_record();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
