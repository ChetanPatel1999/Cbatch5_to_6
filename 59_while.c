//wap to count digit of given numbers.
#include<stdio.h>
void main()
{
  int num,rem,c=0;
  printf("enter a num :");
  scanf("%d",&num);//
  while(num)
  {
    c++;
    num=num/10;
  }
  printf("digit count of num = %d",c);

}
