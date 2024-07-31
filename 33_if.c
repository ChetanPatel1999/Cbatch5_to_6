#include<stdio.h>
void main()
{
  int num;
  printf("enter a num : ");
  scanf("%d",&num);
  if(num==1)
  {
    printf("GOOD MORNING");
  }
   if(num==2)
  {
    printf("GOOD AFTER NOON");
  }
    if(num==3)
  {
    printf("GOOD EVENING ");
  }
  if(num>3)
  {
    printf("please enter 1,2 or ,3 ");
  }

}