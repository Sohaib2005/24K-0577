#include<stdio.h>
int main(void) {
int num1 = 1,num2 = 2,newnum;
for (int i = 1; i<=9 ; i++)
    {
     printf(" %d, ",num1);
    newnum = num1 * num2;
    num1 = num2;
    num2 = newnum;
   
    }

return -1;
}