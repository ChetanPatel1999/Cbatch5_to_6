//wap to print even numbers 1 to 20 witout using for or while loop.
#include<stdio.h>
void main()
{
    int i=1;
    lable:
    if(i%2==0)
    {
        printf("%d\n",i);
    }
    i++;//5
    if(i<=20)
    {
        goto lable;
    }

}
