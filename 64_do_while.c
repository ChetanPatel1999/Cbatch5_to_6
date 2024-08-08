//example of do while
#include<stdio.h>
void main()
{
  int num,n;
  do
  {
    printf("welcome to my calculater ... \n");
    printf("____________________________________\n");
    printf("press 1 for add : \n");
    printf("press 2 for sub : \n");
    printf("press 3 for mul : \n");
    printf("press 4 for div : \n");
    printf("press any number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("addition program : \n");
        break;
        case 2:
        printf("sub program : \n");
        break;
        case 3:
        printf("mul program : \n");
        break;
        case 4:
        printf("div program : \n");
        break;
    }
    printf("you want to continue press  1 : ");
    scanf("%d",&num);
  }
  while(num==1);
}