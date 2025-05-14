/* 1 8  27  64  125  ..... 1000
1 create num variabale
2 create qube variabal
   q=num*num*num
3  dispsly num  

*/
#include<stdio.h>
void main()
{
    int num=1, q;
    q=num*num*num;
    printf(" %d ",q);
   // num=num+1;
    //q=num*num*num;
    //printf(" %d ",q);
    //num=num+1;
    //q=num*num*num;
    //printf(" %d ",q);
    while(num<=9)
    {
        num=num+1;
        q=num*num*num;
        printf(" %d ",q);
    }
printf("\nthank you");

}