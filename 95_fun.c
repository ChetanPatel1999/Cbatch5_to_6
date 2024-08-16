#include<stdio.h>
void fun1()
{
    printf("hi i am fun1\n");
}
void fun2()
{
    printf("hi i am fun2\n");
    fun1();
    printf("by student\n");
}
void fun3()
{
    printf("hi i am fun3\n");
    fun2();
    printf("hi student\n");
}
void main()
{
 printf("hi i am main\n");
}