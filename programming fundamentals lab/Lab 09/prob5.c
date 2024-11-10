#include<stdio.h>
/*Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".*/
    int palindrome(char list[5][20],int found);
    int palindrome(char list[5][20],int found) {
    for(int i = 0;i < 5 ; i++) {
        found = 1;
        for(int j = 0 ; j < (strlen(list[i]))/ 2; j++) {
            if(list[i][j] != list[i][strlen(list[i]) - j - 1]) {
                found = 0;
                break;
            }
        }
        if (found == 1)
        printf("%s is a Palindrome \n",list[i]);
        else
        printf("'%s' is not a Palindrome \n",list[i]);
    }
    return;
}
int main() {
    int found = 1;
char list[5][20] = {
                {"radar"},
                {"madam"},
                {"abdullah"},
                {"muzammil"},
                {"ashar"}
                };
    palindrome(list,found);
}