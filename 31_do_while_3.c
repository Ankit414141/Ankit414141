/* 1 4 9 16 25  ...... 1000 use do while loop
1_creat variabal num squre
dispali num
2 stpes......
  sq =num *num
  num =num+1
  3 dispaly in num
   sq =num *num
  num =num+1
  dispaly num 
*/
#include<stdio.h>
void main()
{
    int num=0,sq;
    do{
        
          
            num=num+1;
            sq=num*num;
            printf("%d  ",sq);

    }while(num<=99);
          
       
    
}

