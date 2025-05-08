/*
    write a program to accept 2 digit amount from user and display it in words 
    input : 35 output eight five 
    steps 
        1) create variable amount,first_digit,last_digit 
        2) accept input from user into amount variable
        3) get first_digit of amount 
           first_digit(8) = amount/10
        4) get last_dight of amount 
            last_digit(5) = amount % 10    
        5) check first_digit and display words accordingly 
        6) check last_digit and display words accordingly 
*/
#include<stdio.h>
void main()
{
    int amount, first_digit,last_dight;
    printf("enter 2digit number");
    scanf("%d",&amount);
    first_digit= amount/10;
    last_dight= amount%10;

    if(first_digit==1)
    {
        printf("one");
    }
    else if(first_digit==2)
    {
      printf("two ");
    }
    else if (first_digit==3)
    {
        printf("three ");
        
    }
    else if (first_digit==4)
    {
        printf("for ");
    }
    else if(first_digit==5){
        printf("five ");
    }
    else if (first_digit==6)
    {
        printf("six ");
    }
    else if(first_digit==7)
    {
        printf("seven ");
    }
    else if (first_digit==8){
        printf("eight ");
    }
    else if
    (first_digit==9)
     {
        printf("nine ");

    }
    else{
        printf("zero ");
    }
    if(last_dight==1)
    {
        printf("one ");
    }
    else if(last_dight==2){
        printf("two ");
    }
    else if(last_dight==3){
            printf("three ");
        }
    else if(last_dight==4){
            printf("for ");
    }
    else if(last_dight==5){
        printf("five ");
    }
    else if(last_dight==6)
    {
        printf("six ");
    }
    else if(last_dight==7)
    {
        printf("seven ");

    }
    else if(last_dight==8)
    {
        printf("eight ");
    }
    else if (last_dight==9)
    {
        printf("nine ");
    }
    else
    {
        printf("zero ");
    }
}