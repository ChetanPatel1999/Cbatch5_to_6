//wapm to print sum of all numbers between given range and also print avrage.
#include<stdio.h>
void main()
{
  int i,s,e,sum=0;
  float av;
  printf("enter start range : ");
  scanf("%d",&s);
  printf("enter ending range : ");
  scanf("%d",&e);
  for (i=s ;i<=e ;i++)
  {
    sum=sum+i;
  }
  printf("sum of %d to %d = %d\n",s,e,sum);
  av=sum/(float)(e-s+1);
  printf("avrage = %f",av);
  
}