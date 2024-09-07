//input string from user as sentance
//gets(var_name)//take string form user
//puts(var_name);// dsiplay string on output string
#include<stdio.h>
void main()
{  
  char name[50];
  printf("enter name : ");
  gets(name);
  puts(name);
  printf("name = %s\n",name);
  int i=0; 
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c ",name[i]);
  }
}