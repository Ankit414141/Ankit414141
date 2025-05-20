#include<stdio.h>
void main()
{
    int i=1,j=1;

    while(i<=5)
{

      
        printf("%5d", i);
        i=i+1;
        printf("(");
        j=1;
    while(j<=3)
    {
        printf("%2d", j);
        j = j+1;
    }
      printf(")");
}



}