/*
    write a program to display multiplication table of given number
    input : 5
    5 x 1 =  5
    5 x 2 = 10

    5 x 3 = 15
    ......
    5 x 10 = 50
    steps
    ----------------------------
    1  create variable number, count, answer (to store multiplication)
    2  accept input from user into number
    3  store 1 in count
    4  multiply number with count, store result into answer
       answer = number * count
    5  print number X count = answer
    6  increment count by 1

    7  answer = number * count
    8  print number x count = answer \
    9  increment count by 1

    10  answer = number * count
    11 print number X count = answer
*/
#include<stdio.h>
void main()
{
    int num,count,ans;
    printf("enter number");
    scanf("%d",&num);
   // count=1;
    //ans=num*count;
    //printf("%2d x %2d = %3d",num,count,ans);
    //count=count+1;
for(count=1;count<=10;count++)
{
    ans=num*count;
    printf("%2d x %2d =%3d\n",num, count,ans);
    

}
    


    



}