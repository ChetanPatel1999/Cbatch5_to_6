#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *ptr=(int*)malloc(5*sizeof(int));
 int *t;
 t=ptr;
 int i;
 *ptr=12;
 ptr++;
 *ptr=45;
 ptr=t;
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;
 }
}