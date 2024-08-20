//wap to add 1 to 10 number using recursion.
#include<stdio.h>
int add1_10(int s,int e)
{
  static int sum=0;
  sum=sum+s;//6
  s++;//4
  if(s<=e)
  {
    add1_10(s,e);
  }
  return sum;
}
void main()
{
  int res=add1_10(1,12);
  printf("sum 1 to 10 = %d",res);
}