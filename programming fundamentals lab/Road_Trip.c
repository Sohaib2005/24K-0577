#include<stdio.h>
void main(void)
{
	/* QUESTION#3
	A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from
	the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after
	paying the tax. This information is then provided to the user.*/
	
	// Data given:
	int single_dist=1207, forward_trip_fuel=118, return_trip_fuel=123;
		
	// User enter the Car fuel average, total fuel cost and the fuel consumed in the trip:
	float car_fuel_avg, total_fuel_cost, fuel_consumed, fuel_cost_forward, fuel_cost_return, total_dist;
				
	// User input the car fuel average
	printf("Enter the car fuel average (KM per liter):");
	scanf("%f", & car_fuel_avg);
				
	// Checking the  input to ensure it's positive
	while( car_fuel_avg <= 0)
	{
		printf("Invalid car fuel average, Enter the car fuel average again (must be in positive):");
		car_fuel_avg = 0;
		scanf("%f", & car_fuel_avg);
	}
				
	// Calculate total distance for the round trip
	total_dist = 2 * single_dist;
				
	// Calculate total fuel consumed
	fuel_consumed = total_dist / car_fuel_avg;
				
	// Calculate fuel cost for forward and return trips
	fuel_cost_forward = (single_dist / car_fuel_avg)*forward_trip_fuel;
	fuel_cost_return = (single_dist / car_fuel_avg)*return_trip_fuel;
		
	// Calculate total fuel cost
	total_fuel_cost = fuel_cost_forward + fuel_cost_return;
				 
	// Display total fuel cost and fuel consumed by the car
	printf("Total fuel consumed by the car for the rounf trip : %.2f \n ",fuel_consumed);
	printf("Total fuel cost by the car for the rounf trip : %.2f \n ",total_fuel_cost);
	
}
