//pointer example
#include<stdio.h>
void main()
{
 int a=12;
 int *ptr;// declair pointer type variable
 ptr=&a;
 printf("value of a : %d\n",a);//12
 printf("adress of a : %d\n",&a);//656789
 printf("adress of a by ptr : %d\n",ptr);//656789
 printf("value of a by ptr : %d",*ptr);//12 dereference pointer
}