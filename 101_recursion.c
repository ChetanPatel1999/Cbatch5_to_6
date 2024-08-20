//recursion:- when a fuction call itself is called recursion.
#include<stdio.h>
int i=1;
void disp()
{
    printf("hello world institute\n");
    i++;
    if(i<=5)
    {
        disp();//recursive calling
    }   
}
void main()
{
 disp();
}