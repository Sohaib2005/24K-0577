#include <stdio.h>
 void main(void) 
{
    int num1, num2, num3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest=0; 
if(num1!=num2 &&num1 != num3 &&num2 != num3){
    if (num1 > num2) 
	{
		if(num1 > num3)
		greatest = num1;
		else greatest = num3;
	}
	else
	{
		if (num2>num3) 
			greatest = num2;
		else greatest=num3; 		
}
	
    printf("The greatest number is: %d\n", greatest);
}
else printf("Numbers are not distict");}

