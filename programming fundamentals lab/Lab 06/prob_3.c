#include<stdio.h>
void main (void)
{
    int num,count=0;
     printf("enter number :");
    scanf("%d",&num);
    int prime = num;
    char flag = 'f';
    if (prime > 1 ) {
            if ( prime == 2 ) {
                flag = 't';
                
                }
            else {
                for( int i = 2; i * i <= prime; i++ ) 
                    {
                    if(prime % i == 0)
                    {
                        flag = 'f';
                        break;            
                    }
                    else  
                    flag = 't';

                    }
                
                }
            if (flag == 't')
                {
                    printf(" %d is a prime number ",prime);
                }
            else printf(" %d is a composite number ",prime);
        }
        else 
        {
            printf(" %d is neither a prime nor a composite number ",prime);
        }
    if (num == 0)
    printf("And it is a single digit number");
    else { 
    while(num!=0)
        {
            num/=10;
            count++;
        }
    if (count!=1)
    {
        printf("And it is a multiple digit number");
    }
    else 
    printf("And it is a single digit number");
    }
}              