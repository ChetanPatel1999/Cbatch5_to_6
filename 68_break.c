//break with while loop
#include<stdio.h>
void main()
{
  int i=1;
  while(i<=10)
  {
    if(i==5)
    {
        break;
    }
    printf("%d\n",i);
    i++;
  }
}