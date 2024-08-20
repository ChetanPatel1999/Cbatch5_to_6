//wap to print factorial of a number using recurion.
#include<stdio.h>
int factorial(int num)//5
{
   static int fact=1,i=1;
    fact=fact*i;//120
    i++;//6
    if(i<=num)
    {
        factorial(num);
    } 
    return fact;
}
void main()
{
 int res=factorial(6);
 printf("factorail = %d",res);
}