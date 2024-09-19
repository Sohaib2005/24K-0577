#include<stdio.h>
void main(void)
{
/*Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/
int num;
printf("Enter number\n");
scanf("%d",&num);
if(num%3==0)
	{
	printf("Number is a multiple of 3");
	}
else
printf("number is not a multiple of 3");

}