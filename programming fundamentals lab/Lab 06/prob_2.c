#include<stdio.h>
void main (void)
{
    int num,count=0;
     printf("enter number :");
    scanf("%d",&num);
    char flag = 'f';
    if (num == 0)
    printf("it is a single digit number");
    else { 
        while(num!=0)
            {
                num/=10;
                count++;
            } 
        if (count!=1)
            {
                printf("it is a multiple digit number");
            }
            else 
            printf("it is a single digit number");
        }
}