/*write a progaram to convert 24 hours fromat time and display it 
steps
------------------------------
1- create variabale
2- accept time into hours variabal
3- check if tme above 11
     if hours<12
     display horse am messege
     if horse>12
     display hours pm messege
4- display in thank you.     
*/
#include<stdio.h>
void main()
{
    float hours;
    printf("enter yor 24 hours format");
    scanf("%f",&hours);
    
    if(hours<=12)
    {
       printf("%.2f AM",hours);
    }

    if(hours>11)
    {
        printf("%.2fPM",hours);
    }
    printf("\nthank you");

}