#include<stdio.h>
int main(void) {
int num = 65536;
for (int i = 1; num!=0 ; i++)
    {
    num/=i;
    printf(" %d ",num);
    }

return -1;
}