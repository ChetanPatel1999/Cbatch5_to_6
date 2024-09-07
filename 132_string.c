//input string from user as sentance
#include<stdio.h>
void main()
{  
  char name[50];
  printf("enter name : ");
  scanf("%[^\n]s",name);
  printf("name = %s\n",name);
}