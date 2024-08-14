#include<stdio.h>
void pattern()
{  
  int i,j;
  for(i=1;i<=2;i++)
  {
    for(j=1;j<=15;j++)
    {
        printf("* ");
    }
    printf("\n"); 
  }
}
void main()
{
 pattern();
 printf("name = chetan patel \n");
 pattern();
 printf("collage = IIST\n");
 pattern();
 printf("city= ujjain\n");
 pattern();
 printf("age = 25\n");
 pattern();
}