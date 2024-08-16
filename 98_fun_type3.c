//with return type, with arguments
#include<stdio.h>
#include<math.h>
int add(int a, int b)
{
 int c;
 c=a+b;
 return c;
}
int factorial(int num)
{
    int fact=1,i;
     for(i=1;i<=num;i++)
    {
       fact=fact*i; 
    }
    return fact;
}
float addfloat(float a, float b)
{
    return a+b;
}
void main()
{
  int res=add(12,5);
  printf("sum = %d\n",res);
  printf("sum= %d\n",add(4,7));
  res=factorial(4);
  printf("factorail = %d\n",res);
  int f=7;
  res=factorial(f);
  printf("factorail of %d = %d\n",f,res);
  printf("pow of 5  = %.1f\n",pow(5,4));// bulit - in fuction
  printf("sum= %.1f\n",addfloat(12.5,7.2));
}