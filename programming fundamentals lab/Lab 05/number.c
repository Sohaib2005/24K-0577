#include<stdio.h>
void main(void)
{
int num;
printf("Enter any number");
scanf("%d",&num);
if (num!= 0)
{
if(num<0)
{printf("Number is negative");}
else
{printf("Number is positive");}
}
else{printf("Number is zero");}
}