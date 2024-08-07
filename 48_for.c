//for loop example
#include<stdio.h>
void main()
{
   int i,num,tab;
   printf("enter a num : ");
   scanf("%d",&num);
  for (i=1 ;i<=10 ;i++)
  {
    tab=i*num;
    printf("%d * %d = %d\n",num,i,tab);
  }
  
}
//3 * 1 = 3
//3 * 2 = 6