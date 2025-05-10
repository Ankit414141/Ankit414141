#include<stdio.h>
void main(){
    int planet_num;
    printf("enter your planet numbar1-8");
    scanf("%d",&planet_num);
    switch(planet_num)
    {
        case 1:
        printf("mercury");
        break;
        case 2:
        printf("venus");
        break;
        case 3:
        printf("earth");
        break;
        case 4:
        printf("mars");
        break;
        case 5:
        printf("jupiter");
        break;
        case 6:
        printf("saturn");
        break;
        case 7:
        printf("uranus");
        break;
        case 8:
        printf("neptune");
        break;
        default:
        printf("not invelid number pls 1-8");

    }





}

