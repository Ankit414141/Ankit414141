/*  1
   21
  321
 4321
54321

*/
#include<stdio.h>
void main()
{
    int space=1,row=5,num=1;
    while(row>=1)
{

    while(space<=row)
    {
        printf("  ");
        space=space+1;
    }
     while(num<=(6-row))
     {
        printf("%d ",num);
        num++;
     }
     space=1;
    num=1;
    printf("\n");
    row=row-1;

}
    














}



