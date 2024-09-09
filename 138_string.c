//strrev() // reverse given string
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50]="123456";
 printf("string : %s\n",ch);
 strrev(ch);
 printf("reverse string : %s",ch);
}