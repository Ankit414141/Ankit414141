/*
    Mohit has two option to buy soap of same brand and same product 
    1) soap is of 10 Rs and weight is 100 gram 
    2) another soap is of 20 rs and weight is 225 grams 
    mohit want to buy cheapest soap per gram. help him (assume dynamic input)

    steps 
    1 create variable price1,weight,price2,weight2,price_per_gram1,price_per_gram2
    2 accept 1st soap price and weight into price1 and weight1 variable
    3 accept 2nd soap price and weight into price2 and weight2 variable
    4 calculate 1st soap price per gram 
        price_per_gram1 = weight1/price1
    5 calculate 2nd soap price per gram 
        price_per_gram2 = weight2/price2
    6 findout cheapest soap 
        if(ce_per_gram1>price_per_grampri2)
            print 1stsoap is cheapest soap it' price per gram is price_per_gram1
            else 
            print 2nd soap is cheapest soap it' price per gram is price_per_gram2
 
*/
#include<stdio.h>
void main()
{
    float price1,weight1,price2,weight2,price_per_gram1,price_per_gram2;
    printf("enter price1");
    scanf("%f",&price1);
    printf("enter weight1");
    scanf("%f",&weight1);

    printf("enter price2");
    scanf("%f",&price2);
    printf("enter weight2");
    scanf("%f",&weight2);

  price_per_gram1=weight1/price1;
  price_per_gram2=weight1/price2;

  if(price_per_gram1>price_per_gram2)
  { printf("1stsoap is cheapest soap it' price per gram is price_per_gram1");


  }
  else
  {
    printf("2nd soap is cheapest soap it' price per gram is price_per_gram2");

  }






}
