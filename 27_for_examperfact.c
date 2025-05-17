#include<stdio.h>
void main()
{
    int number,sum=0,i,reminder;
    printf("Enter A number:-");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {reminder=number%i;
        if(reminder==0){
            sum=sum+i;
 
        }


    }
     if (sum == number)
        printf("%d is a Perfect Number.\n", number);
    else
        printf("%d is not a Perfect Number.\n", number);

    
}