//we can change any variable value using pointer 
#include<stdio.h>
void main()
{
 int a=12, *ptr;
 printf("value of a : %d\n",a);//
 ptr=&a;
 *ptr=89;
 printf("value of a : %d\n",a);//89
}