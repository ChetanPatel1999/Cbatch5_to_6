//continue statment exampale
#include<stdio.h>
void main()
{
  int i;
  for(i=1;i<=10;i++)
  {

    if(i==5)
    {
       printf("hi\n");
       continue; 
    }

    printf("%d\n",i);
  }
}