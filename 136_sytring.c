//strupr() // change string in uperr case
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter a string : ");
 gets(ch);
 printf("string : %s\n",ch);
 strupr(ch);
 printf("uperr case string : %s",ch);
}