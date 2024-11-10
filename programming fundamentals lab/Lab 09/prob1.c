#include<stdio.h>
int product(int n1,int n2);
   // Write a C function that takes two numbers as input and returns their product.
int product(int n1,int n2) {
    return n1 * n2 ;
}
int main() {
    int n1,n2;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("\nEnter number 2 :");
    scanf("%d",&n2);
    printf("Product of %d and '%d is : %d",product(n1,n2));
    return 0;
}