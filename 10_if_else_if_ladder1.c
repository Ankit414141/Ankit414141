/*
    write a program to findout whether shape is portrait landscape or square from given length and width

    steps 
    1 - create variable length and width 
    2 - accept input in variable length and width 
    3 - compare length and width to check shape is portrait 
        if length>width 
            display message shape is portrait 
    4 - compare length and width to check shape is landscape
        if length<width   
            display message shape is landscape 
    5 - if length==width
            display message shape is square 
*/
#include<stdio.h>
void main()
{
    int length, width;
    printf("enter length");
    scanf("%d",&length);

    printf("enter width");
    scanf("%d",&width);
    if(length>width)
    {
        printf("this shape is portrait");

    }
    else if (length<width)
    { 
    printf ("this shap is landscap");

    } 
    else{
        printf("this shap is squre");
    }

}