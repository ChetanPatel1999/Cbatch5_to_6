//wap to add 1 to 10 number using recursion.
#include<stdio.h>
int add1_10(int s,int e)//s=1 e=5
{
  static int sum=0;
  sum=sum+s;
  s++;
  if(s<=e)
  {
    add1_10(s,e);
  }
  return sum;
}
void main()
{
  int res=add1_10(1,5);
  printf("sum 1 to 10 = %d",res);
}