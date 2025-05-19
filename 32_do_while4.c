/* 1 8  27  64  125  ..... 1000 use do while mathed
1 creat varaibale num qube
display num
2  steps..
    q =num*num*num
    num=num+1
    display num
    q = num*num*num
    num++
  
   
*/
#include<stdio.h>
void main()
{
    int num=1,q;
   
  do   {
    num++;
    q=num*num*num;
    printf("%2d ",q);
}while(num<=99);
    
}