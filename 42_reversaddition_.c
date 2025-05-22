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
    int n,r,c,reverse,Palindrom=0;
    printf("Enter number: ");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        reverse = (reverse * 10) + r;
        n=n/10;

    }
    printf("%d",reverse);
    if(c==n)
    {
        printf("this a  Palindrom number");

    }
    else{
        printf("this not a  Palindrom number");

        
    }
    
}