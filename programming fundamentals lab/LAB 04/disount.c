#include<stdio.h>
void main(void)
{
/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If ita more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/
float cost,saved_amount,after_dis,dis;
printf("Enter cost of item\n");
scanf("%f",&cost);
if (cost>=500)
{
	if(cost<2000)
	{
	dis=0.05;
	}
	else if(cost>=2000 && cost <4000)
	{
	dis=0.1;
	}
	else if(cost>=4000 && cost<=6000)
	{
	dis=0.2;
	}
	else 
	dis=0.35;
}
else{
printf("Soryy!you are ineligible for any discount.");
}
saved_amount=dis*cost;
after_dis=cost-saved_amount;
printf("Actual cost = %.2f \nSaved amount = %.2f \nAmount after discount = %.2f",cost,saved_amount,after_dis);

}