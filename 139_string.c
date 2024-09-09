//strcpy() // copy one string in another string
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50]="chetan";
 char ch1[50];
 printf("string : %s\n",ch);
 printf("string : %s\n",ch1);
 strcpy(ch1,ch);
  printf("string : %s\n",ch);
 printf("string : %s\n",ch1);
}