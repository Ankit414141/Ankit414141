// maximum array value
#include<stdio.h>
void main()
{
    int arr[5];
    int max,pos=0;
    
    max=arr[0];
    while (pos<=4)
    {
        printf("enter a value %d for position",pos+1);
        scanf("%d",&arr[pos]);
        pos++;
    }
    max=arr[0];
    pos=1;
    while (pos<=4)
    {
        if(max<arr[pos])
    
        max=arr[pos];
        pos++;
    
    }
    
  
     
    printf("max=%d",max);
    
    


}

