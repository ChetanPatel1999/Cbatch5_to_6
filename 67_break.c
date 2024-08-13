//break statment exampale
#include<stdio.h>
void main()
{
  int i;
  for(i=1;i<=10;i++)
  {
    if(i<=3)
    {
       printf("hi\n"); 
    }
    else{
        break;
    }
    printf("%d\n",i);
  }
}