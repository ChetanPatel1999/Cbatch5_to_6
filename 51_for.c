//even numbers and odd numbers sum between given range.
#include<stdio.h>
void main()
{
  int i,s,e,sume=0,sumo=0;
  printf("enter start range : ");
  scanf("%d",&s);
  printf("enter ending range : ");
  scanf("%d",&e);
  for (i=s ;i<=e ;i++)
  {
    if(i%2==0)
    {
       sume =sume +i;
    }
    else
    {
        sumo=sumo+i;
    }
  }
  printf("sum of even numbers from %d to %d = %d\n",s,e,sume);
  printf("sum of odd numbers from %d to %d = %d\n",s,e,sumo);
  
}