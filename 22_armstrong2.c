/* armstrong number  and not
1,-creat a variabal=n,arm,r,c
2- input in accept user num =153
3- steps:__
   3.1  r=n%10=(3)
     arm=(r*r*r)+arm(27+0)
     n= n/10(15\10=1)
     if stetmant of print 
     if (c==n)
     dispaly in result


*/
#include<stdio.h>
void main()
{
    int n,arm=0,r,c;
    printf("Enter number: ");
    scanf("%d",&n);
    c==n;
    while (n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    if(c==arm)
    {
        printf("this a armstrong number");

    }
    else{
        printf("this not a armstrong number");

        
    }
    
}