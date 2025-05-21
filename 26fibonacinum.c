/*0 1 1 2 3 5 8 13....
1 creat a variabale n a b c i =0;
2 accept in input user(5)
3steps.......
   3.1-  c=a+b;(0=1)=1
         a=b(0+1)=1
         b=c(1)

         DISplay in print a
 3.2   if (i<n)(1)
        c=a+b;(1+1)=2
         a=b()=2
         b=c(1)
         i++(2)
        display IN  print a
*/
#include<stdio.h>
void main()
{
    int n=100,a=0,b=1,c,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    

}