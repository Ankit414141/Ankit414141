/*100 98 96 94 .... 0
stpes---------------
1 creat a variabal number
2 dispaly number=100
- mathamatic is us
num = num-2 (98)
displayis num
3 num=num-2(96)
dispis num
4 num = num -2(94)...
repit and repit logic a while loop us
*/
#include<stdio.h>
void main()
{
   int number=100;
    
   // printf(" %d ", number);
   //  number=number-2;
   //  printf(" %d ", number);
   // number=number-2;
   // printf(" %d ", number);
   while(number>=0)
   {
    printf(" %d ", number);
    number=number-2;
   }
}