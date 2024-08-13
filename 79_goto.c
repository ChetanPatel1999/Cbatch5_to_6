#include<stdio.h>
#include<stdlib.h>
void main()
{
 int num=15;
 printf("even odd numbers check programm : \n");
 //goto ev;
 if(num%2==0)
 {
   goto ev;
 }
 else
 {
    goto od;
 }
 ev:
 printf("even numbers\n");
 exit(0);
 od:
 printf("odd numbers");
}