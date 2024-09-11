#include<stdio.h>
void main(void)
{
	/* Question#6
	Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to
	cap the result to 3 decimal places.*/
	
	//declaration
	float x1 , y1 , x2 , y2;
	 
	// Variable for slope
	float slope;
	printf("enter the value of x1\n");
	scanf("%f",&x1);
	printf("enter the value of x2\n");
	scanf("%f",&x2);
	printf("enter the value of y1\n");
	scanf("%f",&y1);
	printf("enter the value of y2\n");
	scanf("%f",&y2);
	// Calculate the slope of two points
	slope = (y2 - y1)/(x2 - x1);
	
	// Display the result to 3 decimal places
	printf("The slope of the given points is : %.3f \n ",slope);
	
}
