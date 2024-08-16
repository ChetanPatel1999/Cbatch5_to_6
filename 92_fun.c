//Example of fuction
#include<stdio.h>
void add() // fuction defination
{
 int a,b,c;
 printf("enter two nums : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}
void sub()
{
 int a,b,c;
 printf("enter two nums : ");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("sub= %d\n",c);
}
void main()
{
 int num;
 num=2;
 switch(num)
 {
    case 1: add();break;
    case 2: sub(); break;
    default:printf("please enter 1 or 2 ");
 }
}



