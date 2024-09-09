//strlwr() // change string in lower case
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50]="ChEtAN";
 printf("string : %s\n",ch);
 strlwr(ch);
 printf("lower case string : %s",ch);
}