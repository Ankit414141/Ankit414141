/* write a program to findout whether given number is Harshad    Numbers or not
creat a varabale num,remind,harshd,
    input in user number

 stepas---
1      store 1 in divisor & store 0 into sum
    4   reminder = number % 10 //171
    5   
    5   if reminder is zero then
        5.1 sum = sum + divisor 





*/
#include<stdio.h>
void main ()
{
    int num,sum=0,divisor,reminder;
    printf("Enter a number:-");
    scanf("%d",&num);
    reminder=num%10;//1
    num=num/10;//17

     reminder=num%10;//7
    num=num/10;//1
     
      reminder=num%10;//1
    num=num/10;//0
    
    
     
     sum=reminder+num;
   

    printf("%d",reminder);
}