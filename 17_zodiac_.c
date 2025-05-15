/* write a program to accept birth date and month from user. decide zodiac sign from below table 
Aries: March 21–April 19
Taurus: April 20–May 20
Gemini: May 21–June 21
Cancer: June 22–July 22 -67
Leo: July 23–August 22 -78
Virgo: August 23–September 22  -89
Libra: September 23–October 22-910
Scorpio: October 24–November 21-1011
Sagittarius: November 22–December 21-1112
Capricorn: December 22–January 19-121
Aquarius: January 20–February 18- 12
Pisces: February 19–March 20-23
*/
#include<stdio.h>
void main()
{
    int month,date ;
    printf ("enter yor birth month (1-12) ");
    scanf("%d",&month);
     printf ("enter yor birth date ");
     scanf("%d",&date);
     
     if((month==3 && date>=21 && date<=30)||(month==4 && date>=1 && date<=19))
     {      
        printf("zodiac is aries");

    }
    else if((month==4 && date>=20 && date<=31)||(month==5 && date>=1 && date<=20))
    {
        printf("zodiac is Taurus");
    }
     else if((month==5 && date>=21 && date<=30)||(month==6 && date>=1 && date<=21))
    {
        printf("zodiac is Gemini");
    }
     else if((month==6 && date>=22 && date<=31)||(month==7 && date>=1 && date<=22))
    {
        printf("zodiac is Cancer");
    }
    else if((month==6 && date>=23 && date<=30)||(month==7 && date>=1 && date<=22))
    {
        printf("zodiac is Leo");
    }
     else if((month==8 && date>=23 && date<=31)||(month==9 && date>=1 && date<=22))
    {
        printf("zodiac is Virgo");
    }
    else if((month==9 && date>=23 && date<=30)||(month==10 && date>=1 && date<=22))
    {
        printf("zodiac is Libra");
    }
    else if((month==10 && date>=24 && date<=31)||(month==11 && date>=1 && date<=21))
    {
        printf("zodiac is Scorpio");
    }
    else if((month==11 && date>=22 && date<=30)||(month==12 && date>=1 && date<=21))
    {
        printf("zodiac is Sagittarius");
    }
    else if((month==12 && date>=22 && date<=31)||(month==1 && date>=1 && date<=19))
    {
        printf("zodiac is Capricorn");
    }
    else if((month==1 && date>=20 && date<=30)||(month==2 && date>=1 && date<=18))
    {
        printf("zodiac is Aquarius");
    }
    else if((month==2 && date>=19 && date<=29)||(month==3 && date>=1 && date<=20))
    {
        printf("zodiac is Pisces");
    }

     else if(month>=12)
    {
        printf("this not in INVALLID  and month");
        
        
    }else if(date>=31)
    {
        printf("THIS NOT INVALLID DATE");
    }

   













}