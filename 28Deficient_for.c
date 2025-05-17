//) write a program to findout whether given number is Deficient   Numbers or not
/* 1   create variable number,divisor,reminder,sum
    2   accept number from user into number 
    3   store 1 in divisor & store 0 into sum
    4   reminder = number % divisor
    5   if reminder is zero then
        5.1 sum = sum + divisor*/
#include<stdio.h>
void main()
{
    int num,divisor,rem,sum;
    printf("enter number:-");
    scanf("%d",&num);
    for(divisor=1,sum=0;divisor<num;)
    {
        rem= num % divisor;
        if(rem==0)
        {

        sum=sum+divisor;
        }
        divisor++;
    }
    if(sum<=num)
    {
        printf("this number is Deficient number");
    }
    else
    {
        printf("this number is not Deficient number");
    }

}