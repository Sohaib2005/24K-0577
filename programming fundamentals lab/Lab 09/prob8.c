#include <stdio.h>
/*Write a C program with a user-defined function calculate to perform basic arithmetic operators
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operator choice as input, and then use the function to perform the operator.*/
float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator.\n");
            return 0;
    }
}

int main() {
    float num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);


    float result = calculate(num1, num2, operator);
    
    if (operator == '/' && num2 == 0) {

    } else if (operator == '+' || operator == '-' || operator == '*' || (operator == '/' && num2 != 0)) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

