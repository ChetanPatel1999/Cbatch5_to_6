//wap to print sum of individual digit of given numbers.
#include<stdio.h>
void main()
{
  int num,rem,sum=0;
  printf("enter a num :");
  scanf("%d",&num);//678
  while(num)
  {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
  }
  printf("sum of individual digit = %d",sum);

}
