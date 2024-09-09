//strlen() // return string length
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter a string : ");
 gets(ch);
 printf("string : %s",ch);
 int l=strlen(ch);
 printf("\nstring length : %d",l);
}