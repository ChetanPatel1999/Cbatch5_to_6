//wap to find greatest num between three numbers without using logical and operator.
#include<stdio.h>
void main()
{
  int n1,n2,n3;
  n1=1237;
  n2=6777;
  n3=899;
  if(n1>n2)
  {
    if(n1>n3)
    {
        printf("greates num = %d ",n1);
    }
    else
    {
       printf("greates num = %d ",n3); 
    }
  }
  else
  {
      if(n2>n3)
      {
        printf("greates num = %d ",n2);
      }
      else{
        printf("greates num = %d ",n3);
      }
  }
}