#include<stdio.h>
void main()
{
  int num,rem,rev=0;
  printf("enter a num :");
  scanf("%d",&num);//456
  while(num)
  {
    rem=num%10;//3
    rev=rev*10+rem;//654
    num=num/10;//3
  }
  printf("reverse  num = %d",rev);
}