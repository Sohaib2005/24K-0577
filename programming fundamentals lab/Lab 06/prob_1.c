#include<stdio.h>
void main()
{
int num,sum;
   do
    {
   
        printf("\nEnter number");
        scanf("%d", &num);
        sum += num;
        printf("sum is %d\n",sum);
    } 
	while (num!=0);
    
}