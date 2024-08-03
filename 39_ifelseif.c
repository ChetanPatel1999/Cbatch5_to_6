//wap to check given number is nagative or positive or Zero.
#include<stdio.h>
void main()
{
   int num;
   printf("enter a num :");
   scanf("%d",&num);
   if(num<0)
   {
    printf("num is nagative");
   }
   else if (num>0)
   {
    printf("num is positive");
   }
   else{
      printf("num is zero");
   }
}