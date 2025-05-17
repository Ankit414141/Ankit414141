/* write a program to findout whether given number is perfect or not
1 create a variabales number,i ,sum
2 input user a number
3 parefact num exampal-6------>=1+2+3=6
   logic--
 4-  if(i<n)
   reminder=number%i
   sum=sum+1
   if(sum==number)
   diasplay valyu this number parfact 
   else
   display not parfact number



*/

#include<stdio.h>
void main()
{
int i = 1, number, sum = 0;
printf(" Enter any number to check Perfect Number \n");
scanf("%d", &number);

while(i < number )  {
     if(number % i == 0;
          sum = sum + i;
                i++;
           }
     if(sum == number)
          printf("\n %d is Perfect Number", number);
     else
          printf("\n %d is not a Perfect Number", number);

}
