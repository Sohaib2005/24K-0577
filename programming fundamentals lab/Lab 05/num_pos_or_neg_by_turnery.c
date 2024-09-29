#include<stdio.h>
void main (void){
int num;
printf("Enter Number");
scanf("%d",&num);
(num!=0)?(num>0)?printf("%d is Positive",num):printf("%d is Negative",num):printf("%d is Zero",num);
}