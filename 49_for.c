//even numbers
#include<stdio.h>
void main()
{
  int i,s,e,tab;
  printf("enter start range : ");
  scanf("%d",&s);
  printf("enter ending range : ");
  scanf("%d",&e);
  printf("enven numbers %d to %d: ",s,e);
  for (i=s ;i<=e ;i++)
  {
    if(i%2==0)
    {
        printf("%d ",i);
    }
  }
  
}