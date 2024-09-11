#include <stdio.h>
void main(void)
 {
	/*QUESTION#2
	Write a C program that takes two integer values as input from the user. Then swap the values taken from
	the user and display the output of the variables.*/
    float salary, tax_rate, tax_amount, final_amount;

    // User enter the salary and tax rate
    printf("Enter your salary: $ ");
    scanf("%f", &salary);

    printf("Enter the tax rate (as a percentage): ");
    scanf("%f", &tax_rate);

    // Calculate the tax amount and salary after tax
    tax_amount = salary * (tax_rate / 100);
    final_amount = salary - tax_amount;

    // Display the results
    printf("\nTax amount: $ %.2f\n", tax_amount);
    printf("Salary after tax: $ %.2f\n", final_amount);

}
