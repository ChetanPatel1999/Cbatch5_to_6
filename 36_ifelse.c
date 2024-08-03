//wap to check given number is divisible by 4 ,5 and 8 or not.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num :");
  scanf("%d",&num);
  if(num%4==0 && num%5==0 && num%8==0)
  {
    printf("num is divisble by 4,5 and 8");
  }
  else{
    printf("num is not divisible by 4 , 5 and 8 ");
  }
}