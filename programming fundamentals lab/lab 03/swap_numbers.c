#include<stdio.h>
void main(void)
{
		/*QUESTION#2
	Write a C program that takes two integer values as input from the user. Then swap the values
	taken from the user and display the output of the variables.*/
	//declaration
	int first , second;
	//input first number
	printf("Enter the First Number");
	scanf("%d",&first);
	//input second number
	printf("Enter the Second Number");
	scanf("%d",&second);
	//swapping process
	first=first + second;
	second=first - second;
	first=first - second;
	//after swapping
	printf("first  number becomes %d\n",first);
	printf("second number becomes %d",second);

}