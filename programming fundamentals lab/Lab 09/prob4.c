#include<stdio.h>
#include<string.h>
/*Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s there,
otherwise display "Not Found".*/
int findstr(char list[5][20],char find[20],int found);
int findstr(char list[5][20],char find[20],int found) {
    for(int i = 0;i < 5 ; i++) {
        found = 1;
        for(int j = 0 ; find[j] !='\0' || list[i][j] != '\0' ; j++) {
            if(list[i][j] != find[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1)
        return 1;
    }
    return 0;
}
int main() {
char list[5][20] = {
                {"sohaib"},
                {"anas"},
                {"abdullah"},
                {"muzammil"},
                {"ashar"}
                };
    char find[20];int found = 1;
    printf("Enter the string to find :");
    fgets(find,sizeof(find),stdin);
    int i =0;
    while (find[i] != '\0') {
        if (find[i] == '\n') {
            find[i] = '\0';
            break;
        }
        i++;
    }
    int result = findstr(list,find,found);
    if(result) 
    printf("String found");
    else 
    printf("String not found"); 
}