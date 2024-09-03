//dyanamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i;
 int *ptr,*temp;
 ptr=malloc(20);
 temp=ptr;
 //11 22 33 44 55
 for(i=0;i<5;i++)//5
 {
    scanf("%d",ptr);
    ptr++;//420
 }
 ptr=temp;
 printf("array element are : ");
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;//408
 }
 ptr=temp;
 free(ptr);
}