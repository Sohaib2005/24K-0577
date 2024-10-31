#include <stdio.h>

int main() {
    int start, i, j;

    // Get the starting odd number from the user
    printf("Enter an odd number to start the pattern: ");
    scanf("%d", &start);

    // Check if the input number is odd
    if (start % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1; // Exit the program if the number is not odd
    }

    // Generate the pattern
    for (i = start; i > 0; i -= 2) { // Decrease by 2 to get only odd numbers
        for (j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

