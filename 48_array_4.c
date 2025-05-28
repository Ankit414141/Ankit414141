/* write a program to sort array into ascending order*/
#include<stdio.h>
void main()
{
    float result[5]={50.2,85.2,75.2,99.2,65.2};
    float temp;
    //01.02.03.04.
    int position=0;
    for( int i=0;i<=4;i++)
    {
        for(int j=+i+1;j<=4;j++)
        {
            if(result[i]>result[j])
            {
                temp=result[i];
                result[i]=result[j];
                result[j]=temp;
            }
        }
    }
    while(position<=4)
    {
        printf("%5.2f\n",result[position]);
        position=position+1;
    }

}