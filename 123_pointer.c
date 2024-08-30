//if we increse pointer by 1 so its value increse
// by 4 if pointer type is int.
#include<stdio.h>
void main()
{
 int a=12;
 int *ptr=&a;
 printf("adress of a : %d\n",&a);//1236
 printf("ptr value : %d\n",ptr);//1236
 ptr++;
 printf("adress of a : %d\n",&a);//1236
 printf("ptr value : %d\n",ptr);//1240

}