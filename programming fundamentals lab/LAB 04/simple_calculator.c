#include<stdio.h>
void main(void)
{
/*Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/
char sign;
float num1,num2;
printf("Enter number 1\n");
scanf("%f", &num1);
printf("Enter numnber 2\n");
scanf("%f", &num2);
printf("Enter operator\n");
scanf(" %c", &sign);
switch(sign)
	{
	case '+':
	printf("%.1f %c %.1f =\t%f",num1,sign,num2,num1+num2);
	break;
	case '-':
	printf("%.1f %c %.1f =\t%f",num1,sign,num2,num1-num2);
	break;
	case '*':
	printf("%.2f %c %.2f =\t%f",num1,sign,num2,num1*num2);
	break;
	case '/':
	printf("%.3f %c %.3f =\t%f",num1,sign,num2,num1/num2);
	break;
	default:
	printf("invalid operator");
	}

}