//wap to print factorial of given numbers.
#include<stdio.h>
void main()
{
  int num,i,fact=1;
  printf("enter a num :");
  scanf("%d",&num);//4
  for(i=1;i<=num;i++)
  {
     fact=fact*i;//24`
  }
  printf("factorial of %d = %d ",num,fact);

}