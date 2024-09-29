#include<stdio.h>
void main (void)
{
int num1,num2;
printf("Enter First Number");
scanf("%d",&num1);
printf("Enter Second Number");
scanf("%d",&num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("After XOR num1 = %d\nnum2 = %d",num1,num2);
}