#include <stdio.h>
#include <string.h>
// Create a function that reverses a given string and returns the reversed string. Use this function
// in the main program to display the reversed string entered by the user.
void reverseString(char str[]) {
    int length = strlen(str);
    int i;
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  

    reverseString(input);


    printf("Reversed string: %s\n", input);

    return 0;
}

