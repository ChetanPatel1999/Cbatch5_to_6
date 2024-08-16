// no return type , but with argumnets
#include <stdio.h>
void add(int a,int b)//a=12 b=13
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void disp(float num)
{
  printf("value of num = %.2f\n",num);
}
void cube(int n)
{
    int cube;
    cube=n*n*n;
    printf("cube of %d = %d\n",n,cube);
}
void cuberange(int s,int e)
{
    int i;
     for(i=s;i<=e;i++)
    {
        cube(i);
    }
}
void factorial(int num)
{
    int fact=1,i;
     for(i=1;i<=num;i++)
    {
       fact=fact*i; 
    }
    printf("factorial = %d\n",fact);
}
void main()
{
    int x,y;
    x=12;
    y=6;
    add(x,y);
    add(12,13);// calling of fuction
    disp(12.56);
    cube(5);
    cuberange(1,5);
    int f=5;
    factorial(f);
}