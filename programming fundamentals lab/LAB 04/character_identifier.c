#include<stdio.h>
void main(void)
{
/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/
char character;
printf("Enter any character\n");
scanf(" %c", &character);
	if((character >= 32 && character <= 47)||(character >= 58 && character <= 64)||(character >= 91 && character <= 96)||(character >= 123 && character <= 126))
	{
	printf("%c is a special character\n",character);
	}
	else if(character >= 49 && character <= 57)
	{
	printf("%c is a digit\n",character);
	}
	else if(character >= 65 && character <= 90)
	{
	printf("%c is a small alphabet\n",character);
	}
	else if(character >= 97 && character <= 122)
	{
	printf("%c is a capital alphabet\n",character);
	}
	else printf("Invalid character");

}