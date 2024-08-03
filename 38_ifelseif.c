//print word according to number.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num :");
  scanf("%d",&num);
  if(num==1)
  {
    printf("ONE");
  }
  else if(num==2)
  {
    printf("TWO");
  }
    else if(num==3)
  {
    printf("Three");
  }
    else if(num==4)
  {
    printf("FOURE");
  }
    else if(num==5)
  {
    printf("FIVE");
  }
  else{
    printf("enter 1 to 5 ");
  }

}