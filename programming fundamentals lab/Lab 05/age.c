#include<stdio.h>
void main(void)
{
int age;
printf("Enter your age\n");
scanf("%d",&age);
if(age>0)
{
if(age >12)
{
if(age > 19)
{
if (age>40){printf("you are adult");}
else {printf("you are senior");}
}
else {printf("you are a teenager");}
}
else printf("you are a child");
}
else
{printf("Invalid Age");}
}