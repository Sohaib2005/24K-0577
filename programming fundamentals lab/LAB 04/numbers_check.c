#include<stdio.h>
void main(void)
{
int n;
printf("Enter Number");
scanf("%d",&n);
if(n >=1 && n <= 9)
{
if(n==1){printf("Number is %d",n);}
else if(n==2){printf("Number is %d",n);}
else if(n==3){printf("Number is %d",n);}
else if(n==4){printf("Number is %d",n);}
else if(n==5){printf("Number is %d",n);}
else if(n==6){printf("Number is %d",n);}
else if(n==7){printf("Number is %d",n);}
else if(n==8){printf("Number is %d",n);}
else {printf("Number is %d",n);}
}
else{printf("number greater than 9");}
}