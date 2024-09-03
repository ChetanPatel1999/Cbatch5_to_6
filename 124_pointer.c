//pointer to array
#include<stdio.h>
void main()
{
 int arr[5];
 int i;
 int *ptr;
 ptr=&arr[0];
 //11 22 33 44 55
 for(i=0;i<5;i++)//5
 {
    scanf("%d",ptr);
    ptr++;//420
 }
 ptr=&arr[0];
 printf("array element are : ");
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;//408
 }
}