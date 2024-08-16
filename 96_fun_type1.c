// no return type , no argumnets
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter two nums : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void main()
{
    add();
}