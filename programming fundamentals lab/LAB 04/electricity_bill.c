#include<stdio.h>
void main(void)
{
int c_id,u_c;float charge_u,net_amount,bill,sur_amount=0;
printf("Enter Consumer ID");
scanf("%d",&c_id);
printf("Enter Units Consumed");
scanf("%d",&u_c);
if(u_c<200) {charge_u=16.20;}
else if(u_c >= 200 && u_c < 300) {charge_u=20.10;}
else if(u_c >= 300 && u_c < 500) {charge_u=27.10;}
else if(u_c >=500) {charge_u=35.90;}
else {printf("Invalid Entry");}
bill=u_c*charge_u;
if(bill>18000) {sur_amount= bill*.15;}
net_amount=bill + sur_amount;
printf("Consumer ID : %d\nUnits Consumed : %d\nAmount Charges @Rs.%f per unit: %f\nSurcharge Amount: %f\nNet Amount Paid By Customer: %f",c_id,u_c,charge_u,bill,sur_amount,net_amount);
}