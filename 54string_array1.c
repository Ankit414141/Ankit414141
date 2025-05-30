//string array in add name surname address
#include <stdio.h>
#define SIZE 32
#define BIGSIZE 128
void main()
{
char name[SIZE],surname[SIZE],address[BIGSIZE];
printf("ENTER A NAME");
scanf("%s",name);
fflush(stdin);
printf("ENTER A SURNAME");
scanf("%s",surname);
fflush(stdin);
printf("ENTER A ADDRESS");
gets(address);
fflush(stdin);
puts(name);
puts(surname);
puts(address);
}