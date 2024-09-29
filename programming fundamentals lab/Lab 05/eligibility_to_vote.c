#include<stdio.h>
void main (void){
int age;
char citizen;
printf("Enter your age\n");
scanf("%d",&age);
printf("\npress 'Y' if you are a citizen and 'N' if you are not");
scanf("%d",&citizen);
if (age>=18 && citizen=='Y')
{printf("you are eligible to vote");}
else{printf("you are ineligible to vote");}
}