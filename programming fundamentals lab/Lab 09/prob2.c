#include<stdio.h>
void evennodd(num);
// Write a function that checks if a given number is even or odd.
void evennodd(num) {
    (num % 2 == 0 )?printf("Number is even"):printf("Number is odd");
}
int main() {
    int num; 
    printf("Enter number : ");
    scanf("%d",&num);
    evennodd(num);
}