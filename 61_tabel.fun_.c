//table functoin
#include<stdio.h>
void ankit(int s,int i)
{   
     
    printf("\n%d x %d = %d",s,i,s*i);
}
void main()
{
    int s,e;
    int i;
    printf("enter a strat number:-");
    scanf("%d",&s);
     printf("enter a end number:-");
    scanf("%d",&e);

 
    for(int j=s;j<=e;j++)
   {
        for(  i=1;i<=10;i++)
        {
            ankit(j,e);
        }
   }
   printf("\n");
}