#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Output: ");
    for ( i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

