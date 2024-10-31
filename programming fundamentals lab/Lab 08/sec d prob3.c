#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k, minRow, isSaddlePoint, saddleFound = 0;

    // Take input for the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find saddle points
    for (i = 0; i < 3; i++) {
        minRow = matrix[i][0];
        int colIndex = 0;

        // Find the smallest element in the current row
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        // Check if the smallest element in the row is the largest in its column
        isSaddlePoint = 1;
        for (k = 0; k < 3; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle point found at position [%d][%d]: %d\n", i, colIndex, minRow);
            saddleFound = 1;
        }
    }

    if (!saddleFound) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}

