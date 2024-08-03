#include<stdio.h>
void main()
{
  int num1,num2;
  printf("enter two num :");
  scanf("%d%d",&num1,&num2);
  switch(num1==num2)
  {
    case 0:
    printf("num are diff");
    break;
    case 1:
    printf("num are same");
    break;
  }
}