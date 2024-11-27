#include <stdio.h>
void printing(int arr[], int n) {

    if (n == 0) {
        return;
    }
    
    printf("%d\n", *(arr));
    printing(arr + 1, n - 1);
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array elements are:\n");
    printing(array, n);

    return 0;
}

