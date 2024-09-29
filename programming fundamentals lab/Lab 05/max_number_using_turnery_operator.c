#include<stdio.h>
void main (void){
int num1,num2;
printf("Enter First Number");
scanf("%d",&num1);
printf("Enter Second Number");
scanf("%d",&num2);
(num1!=num2)?(num1>num2)?printf("%d is greater",num1):printf("%d is greater",num2):printf("%d and %d are equal",num1,num2);

}