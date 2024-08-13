//wap to print odd numbers using continue stmnt. 
#include<stdio.h>
void main()
{
  int i;
  printf("even number series : ");
  for(i=1;i<=20;i++)
  {
    if(i%2==1)
    {
       continue; 
    }
    printf("%d ",i);
  }
}