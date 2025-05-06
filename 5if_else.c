/*1-creat variable num and qube
  2 accept input from and storein into number(p/s)
    chek if num is  positive or not
    ___if num<0-10
    convert in to positve num
    num=0-num 0--10
    ___else
    display not allredy positive num
    pube=num*num*num
    display in qube


*/
#include<stdio.h>
void main()
{
 int num, qube;
  printf("enter num");
  scanf("%d",&num);
  if(num<0)
  {
    num =0-num;
    printf("tihs a num negative is convert  positive num");

  }
  else
  {
    printf("not allreday positive num");

  }
  qube=num*num*num;
  printf("\nqube=%d",qube);



}