//recursion:- when a fuction call itself is called recursion.
#include<stdio.h>
void disp()
{
    static int i=1;//its run only once time in programm
    printf("hello world institute\n");
    i++;
    if(i<=3)
    {
        disp();
    }
    printf("lakshya\n");
}
void main()
{
 disp();
}