/*  *
   * *
  *   * 
 *     *
* * * * *
*/
#include<stdio.h>
void main()
{
    int space=1,row=5, airstrik=1;
    while(row>=1)
    { 
        while(space<=row)
        {
            printf(" ");
            space++;

        }
        while(airstrik<=(6-row))
         {
            printf("* ",airstrik);
             airstrik++;
             if((row>0)||(airstrik<=4))
             {
                printf("");
             }
        }
        printf("\n");
        space=1;
        airstrik=1;
        row--;












    }




}