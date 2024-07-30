//wap to print square of given number.
#include<stdio.h>
void main()
{
  int num,s,c;
  printf("enter a num :");
  scanf("%d",&num);//5
  s=num*num;
  c=num*num*num;
  printf("square of %d = %d\n",num,s);	
  printf("cube of %d = %d\n",num,c);
}
