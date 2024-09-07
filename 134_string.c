//input string from user as sentance
//fgets(var_name)//take string form user
//fputs(var_name);// dsiplay string on output string
#include<stdio.h>
void main()
{  
  char name[5];
  printf("enter name : ");
  fgets(name,5,stdin);
  fputs(name,stdout);
  printf("\nname = %s\n",name);
  int i=0; 
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c ",name[i]);
  }
}