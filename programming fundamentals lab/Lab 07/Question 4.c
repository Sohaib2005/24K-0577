#include<stdio.h>
int main(){
    int size,i;
    // input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int count[size]; // Array count the element
   
    // initialize the count array with 0
    for ( i = 0; i < size; i++){
        count[i] = 0;
    }
    // input elements into the array
    for ( i = 0; i < size; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // count each element in the input array
    for ( i = 0; i < size; i++){
        count[arr[i]]++;
    }
    // output the elements that occur more than once
    printf("\nNumbers");
    for ( i = 0; i < size; i++){
        if (count[i] > 1) {
            printf(" %d and", i);
        }
    }
    printf(" occurring more than once");
    return 0; }
