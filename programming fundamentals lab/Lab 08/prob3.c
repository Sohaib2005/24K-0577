#include <stdio.h>

int main() {
    int matrix[2][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} }
    };
    
    int page, row, col;
    int sum[2] = {0, 0};  

    // Calculate the sum of each page
    for (page = 0; page < 2; page++) {
        for (row = 0; row < 3; row++) {
            for (col = 0; col < 3; col++) {
                sum[page] += matrix[page][row][col];
            }
        }
    }

    // Display the sums
    for (page = 0; page < 2; page++) {
        printf("Sum of elements on page %d: %d\n", page + 1, sum[page]);
    }

    return 0;
}

