/*
    write a program to accept monthly income from user and then calculate annual gross income, net come and tax amount as per below income tax rule
    From Rs. 12,00,001 to Rs. 16,00,000	15%
    From Rs. 16,00,001 to Rs. 20,00,000	20%
    From Rs. 20,00,001 to Rs. 24,00,000	25%
    Above Rs. 24,00,001	30%
*/
#include<stdio.h>
void main()
{
    float income,gross_income,tax,net_income;
    printf("enter your monthly income: ");
    scanf("%f",&income);
    gross_income=income*12;
    if(gross_income>2400000)
    {
        tax=gross_income*0.30;
    }
    else if (gross_income>2000000)
    {
        tax=gross_income*0.25;
    
    }
    else if (gross_income>1600000)
    {
        tax=gross_income*0.20;
    }
    else if (gross_income>1200000)
    {
        tax=gross_income*0.15;
    }
    else
    {
        tax=0;

    }
    net_income=gross_income-tax;
    printf ("\ngross_income%.2f",gross_income);
    printf("\ntex%.2f",tax);
    printf("\nnet_income%.2f",net_income);
    printf("\nthank you");

}