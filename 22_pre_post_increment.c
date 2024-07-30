//pre and post increment operator
#include<stdio.h>
void main()
{
 int a =12,b;
 //b=a++;//post increament :- frist assign value in b and than increse a value by 1
 b=++a;//pre increamant :- frist increse a value by one and assign increase value in b
 printf("a = %d\n",a);//13	
 printf("b = %d\n",b);//12
}
