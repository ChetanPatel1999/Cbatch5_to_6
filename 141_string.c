//strrev() // reverse given string
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50]="cheta";
 char ch1[50]="cheta";
 if(strcmp(ch,ch1)==0)//strcmpi()// its ignor upper/lower
 {
    printf("string are same");
 }
 else
 {
    printf("string are different");
 }
}