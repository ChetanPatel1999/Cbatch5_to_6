//example of goto
#include<stdio.h>
void main()
{
 int i=1;   
 printf("hi students \n");
 i++;
 if(i<=5)
 {
    goto l;
 }
 printf("c/cpp\n");
 printf("python\n");
 l:
 printf("by students");
}