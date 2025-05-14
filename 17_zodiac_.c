/* write a program to accept birth date and month from user. decide zodiac sign from below table 
Aries: March 21–April 19
Taurus: April 20–May 20
Gemini: May 21–June 21
Cancer: June 22–July 22
Leo: July 23–August 22
Virgo: August 23–September 22
Libra: September 23–October 22
Scorpio: October 24–November 21
Sagittarius: November 22–December 21
Capricorn: December 22–January 19
Aquarius: January 20–February 18
Pisces: February 19–March 20
*/
#include<stdio.h>
void main()
{
    int month,date ;
    printf ("enter yor birth month  ");
    scanf("%d",&month);
     printf ("enter yor birth date ");
     scanf("%d",&date);
     
     if((month==3 && date>=21 && date<=30)||(month==3 && date>=19 && date<=1))
     {      
        printf("zodiac is aries");

    }
    else if((month==4 && date>=20 && date<=31)||(month==5 && date>=20 && date<=1))
    {
        printf("zodiac is Taurus");
    }
     else if((month==5 && date>=21 && date<=30)||(month==6 && date>=21 && date<=1))
    {
        printf("zodiac is Gemini");
    }
     else if((month==6 && date>=22 && date<=30)||(month==6 && date>=22 && date<=1))
    {
        printf("zodiac is Cancer");
    }
    else if((month==6 && date>=23 && date<=30)||(month==7 && date>=22 && date<=1))
    {
        printf("zodiac is Leo");
    }













}