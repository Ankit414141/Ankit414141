/*write a progaram a calculet a compound intrest for amount intrest and year give by the use
1- creat a variabale amount intrest year
2- accept user input
3- intrest in fromula
   intrest =(amount*rate+1)/100
4- use the compund amount=
   amount= amount+intrest
5- disply for thx


*/
#include<stdio.h>
void main()
{
    float amount,intrest,rate;
    int year,count=1;
    printf("enter your amount-");
    scanf("%f",&amount);
     
    printf("enter your rate-");
    scanf("%f",&rate);
     
    printf("entre your year-");
    scanf("%d",&year);
     
    while(count<=year) 
    {
        intrest = (amount * rate * 1) / 100;
        amount = amount+intrest;
        count = count+1;

    }
    printf("intrest=%.2f ,amount=%.2f",intrest,amount);
}