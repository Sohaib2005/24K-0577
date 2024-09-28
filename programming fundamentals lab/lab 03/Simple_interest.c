#include<stdio.h>
void main(void)
{
	/* QUESTION#5
	Construct a C program with the flowchart below. The input value of the principle must be between 100
	Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
	1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window. */

	// Variables
	int principle_amount = 0, time_period = 0;
	float rate_of_interest, simple_interest;
	
	// Input principal amount 
	printf("Enter the Principle amount b/w  Rs.100 To Rs.1,000,000 :");
	scanf("%d", & principle_amount);
	
	// Validate principal amount
	while(principle_amount < 100 || principle_amount > 1000000 )
	{
	printf("Invalid amount, Enter the Principle amount again b/w  Rs.100 To Rs.1,000,000 : ");
	scanf("%d", & principle_amount);		
	}
		
	// Input rate of interest
	printf("Enter the Rate of interest (5 to 10 percent) :");
	scanf("%f", & rate_of_interest);
	
	// Validate rate of interest
	while(rate_of_interest < 5 || rate_of_interest > 10 )
	{
	printf("Invalid interest, Enter the Rate of interest again (5 to 10 percent) : ");
	scanf("%f", & rate_of_interest);
		
	}
	
	// Input time period
	printf("Enter the Time Period b/w 1 to 10 years :");
	scanf("%d", & time_period);
	
	// Validate time period
	while(time_period < 1 || time_period > 10 )
	{
	printf("Invalid interest, Enter the Time Period b/w 1 to 10 years : ");
	scanf("%f", & time_period);
		
	}
		
	// Calculate simple interest
	simple_interest = (principle_amount*time_period*rate_of_interest)/100;
	printf("The simple interest is : Rs.%.2f ",simple_interest);
	
}
