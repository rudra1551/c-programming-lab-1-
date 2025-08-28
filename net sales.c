#include<stdio.h>
int main()
{
float gross_sales,discount,net_sales;
printf("Enter gross sales:");
scanf("%f",&gross_sales);
if(gross_sales>20000)
{
discount=0.15*gross_sales;
}
else if(gross_sales>10000)
{
discount=0.1*gross_sales;
}
else
{
discount=0.05*gross_sales;
}
net_sales=gross_sales-discount;
printf("discount=%2f\n",discount);
printf("net_sales=%2f\n",net_sales);
return 0;
}
