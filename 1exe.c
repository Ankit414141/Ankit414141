/*write a program given year is milleniniume year or not using diecision making statemant
1 -creat a variyeble year
2 - accept here intput
  if year%1000==0
  dispaly is milleniniume year
  if year%100!=0
  display is not milleniniume

*/
#include<stdio.h>
void main()
{
  int year;
  printf("enter a year");
  scanf("%d",&year);
   
  if(year%1000==0)
  {
    printf("this year milleniniume");
  }
  if(year%1000!=0)
  {
    printf("tis year not milleniniume");

  }
  printf("\nthank you");
}
