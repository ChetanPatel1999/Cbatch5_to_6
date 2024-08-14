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
 sub();
 printf("hi main\n");
 add();// fuction calling
 printf("again main\n");
 add();
}



