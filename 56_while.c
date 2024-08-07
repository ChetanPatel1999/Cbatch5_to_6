//while loop example
#include<stdio.h>
void main()
{
  int s,e,sum=0;
  scanf("%d%d",&s,&e);
  while(s>=e)
  {
    if(s%2==0)
    {
        sum=sum+s;
    }
    s++;
  }
  printf("sum of even numbers = %d",sum);
}