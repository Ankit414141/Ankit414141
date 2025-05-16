/*creat avariabales numbar,i
1-user input a num.
2-  i=2 chek is num is divisibal
by num-1
3if(num% i==0)this reselat exit
 */
#include<stdio.h>
void main()
{ 
 int i=2,n;
     printf("enter a numbar=");
    scanf("%d",&n);
    if (n<2){
    printf("%dis not composite num\n",n);
     }
    while (i<n)
    {
    if(n%i==0){
    printf("%d is a composite num\n",n);
    break;
     }
    i=i+1;

 } if(i==n)
    printf("%d is not composite\n",n);
 
 


    
}