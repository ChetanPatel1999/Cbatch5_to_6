//example of goto
#include<stdio.h>
void main()
{
 int i=1;   
 lab:
 printf("hi students \n");
 i++;
 if(i<=5)
 {
    goto lab;
 }
 printf("by students");
}