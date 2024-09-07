#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n;
  printf("enter dyanamic array size : ");
  scanf("%d",&n);//5
  int *ptr=(int*)malloc(n*sizeof(int));
  int *temp=ptr;
  int i;
  printf("dyanamic array adress : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",ptr);
    ptr++;
  }
  int m;
  printf("enter nwe sizde of incerse array : ");
  scanf("%d",&m);//3
  n=n+m;
  int *newptr=realloc(temp,n*sizeof(int));
  printf("newarray adress : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",newptr);
    newptr++;
  }
  free(temp);


}