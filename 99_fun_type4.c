// with return type , no argumnets
#include <stdio.h>
int add()
{
    int a, b, c;
    printf("enter two nums : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
void main()
{
    int res=add();
    printf("sum = %d\n",res);
}