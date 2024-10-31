#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Take input for the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (i = start; i <= end; i++) {
        if (i < 2) 
		continue; // Numbers less than 2 are not prime

        isPrime = 1; // Assume the number is prime
        for (j = 2; j * j <= i; j++) { // Check divisibility
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i); // Print the prime number
        }
    }

    printf("\n");
    return 0;
}

