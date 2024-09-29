#include <stdio.h>
void main(void) {
    int age;                 
    float income;           
    int creditScore;        
    int loanEligibility;
    printf("Enter your age: ");
    scanf("%d", &age);
	printf("Enter your monthly income: ");
    scanf("%f", &income);
	printf("Enter your credit score: ");
    scanf("%d", &creditScore);
	if (age >= 18 && income >= 3000 && creditScore >= 650) 
	{
        loanEligibility = 1; // Eligible for loan
    } 
	else 
	{
        loanEligibility = 0; // Not eligible for loan
    }

    if (loanEligibility) 
	{
        printf("You are eligible for a loan.\n");
    } 
	else 
	{
        printf("You are not eligible for a loan.\n");
    }
}

