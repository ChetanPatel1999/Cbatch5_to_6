//Example of fuction
#include<stdio.h>
void add(); //fuction declaration
void main()
{
 printf("hi main\n");
 add();// fuction calling
 printf("again main\n");
 add();
}
void add() // fuction defination
{
 int a,b,c;
 printf("enter two nums : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}

