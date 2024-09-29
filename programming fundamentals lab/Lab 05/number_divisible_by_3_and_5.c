#include<stdio.h>
void main(void)
{
int num;
printf("Enter any  number");
scanf("%d",&num);
if (num%3== 0 && num%5==0)
{
printf("Number is divisible by both 3 and 5");
}
else{printf("Number is not divisible by 3 and 5");}
}