/*
 1 4 9 16 25  ...... 1000
 creat a numbar
 dispaly in number
 sq=numbetr *number
 display number
 */
 #include<stdio.h>
 void main()
 {
    int numbar=1;
    int sq;
    sq = numbar*numbar;
    printf(" %d ",sq);
    //numbar = numbar +1;
    //sq = numbar*numbar;
    //printf(" %d ",sq);
     while(numbar<=99)
     {
       
       numbar = numbar +1;
       sq = numbar*numbar;
       printf(" %d ",sq);
     }
 }