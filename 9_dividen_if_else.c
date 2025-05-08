/*1 creat a varibales stock_price1,divi1,stock_price2,divi2,retun1, retun2
  2 accept user1 market price last year stock_price1,divi1
  3 accept user 2 market price lste year stock_price2,divi2
  4 if (divi/price1)>(divi2/price2)
     print 1stock retun per 
   else(this 2stock retun per )  
  5 didpaly in thank you
*/
#include<stdio.h>
void main()
{
  float stock_price1,stock_price2,divi1,divi2;
  printf("enter stock 1 market price (per shar rs) ");
  scanf("%f",&stock_price1);

  printf("enter last dividen(per shar rs)");
  scanf("%f",&divi1);
  
  printf("enter stock 2 msrket price (per shar rs)");
  scanf("%f",&stock_price2);

  printf("enter last diveden (per shar rs)");
  scanf("%f",&divi2);

  float ans1; 
   ans1 =divi1/stock_price1;
  float ans2;
  ans2 = divi2/stock_price2;
  if(ans1>ans2){
   printf("stock_1 is bater dividan");
  }
  else
  {
  printf("stock_2 is bater dividan");
  }

   printf("\nthank you");  
  }
