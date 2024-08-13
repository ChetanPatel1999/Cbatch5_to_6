#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=10;i++)// decide row in pattern
  {
    for(j=1;j<=3;j++)//decide column in pattern
    {
        printf("* ");
    }
    printf("\n"); 
  }
}