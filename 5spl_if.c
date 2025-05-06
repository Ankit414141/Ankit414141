/*write a programs to find out whether shape is potrait landscap or squar
steps
----------------------
1- creat variabal length width
2 accept input in variabal length width
3 compair length and width to check shap is portrait
    if length>width 
  display masseg  shap is portrait 
 compair length and width to check shap is landscap
   if length<width
 compair length and width to check shap is squar
    if  length==width
4 display messeg thank you    
*/
#include<stdio.h>
void main()
{
    int length, width;
    printf("enter length");
    scanf("%f",&length);
    printf("enter width");
    scanf("%f",&width);
    
    if(length>width)
    {
        printf("shap is portrait");

    }
    if(length>width)
    {
        printf("shap is landscap");
    }
    if(length==width)
    {
        printf("shap is squar");
        
    }

    printf("\n thank you");

}