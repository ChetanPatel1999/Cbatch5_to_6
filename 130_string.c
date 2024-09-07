#include<stdio.h>
void main()
{
  char name[] ="chetan patel is good boy";
  int i;
  // using null character iterate string charcter
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c ",name[i]);
  }
  printf("\n");
  int c=0;
  printf("only print vovels : ");
   for(i=0;name[i]!='\0';i++)
  {
    if(name[i]=='u' ||name[i]=='o' ||name[i]=='i' ||name[i]=='e' ||name[i]=='a' )
    {
      printf("%c ",name[i]);
      c++;  
    }
  }
  printf("\ntotal vovel = %d",c);
}