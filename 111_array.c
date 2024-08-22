//wap to take array element from user and print in reverse order.
#include<stdio.h>
void main()
{
 int marks[5],i;
 printf("enter 5 student marks : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",&marks[i]);
 }
 printf("display marks : ");
 for(i=0;i<5;i++)
 {
    printf("%d ",marks[i]);
 }
  printf("\ndisplay marks in reverse order: ");
 for(i=4;i>=0;i--)
 {
    printf("%d ",marks[i]);
 }


}