//type-casting :- convert one data type into another data type
//implicite type casting:- its perform by compiler
//explicite type casting:- its perform by programmer
#include<stdio.h>
void main()
{
    int a=12,ans2;
    char ch='A';
    float b=5.4;
    float ans;
    ans=a+b;
    ans2=(int)ch+a;
    printf("ans = %.2f\n",ans);
    printf("ans2 = %d\n",ans2);
    float d=65.78;
    printf("value of d = %d\n",(int)d);
    printf("value of d = %c\n",(char)d);
}