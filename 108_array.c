//array example
#include<stdio.h>
void main()
{
  int a[]={2,4,5,8,9};
  printf("array elemet are : \n");
  int i;
  for(i=0;i<5;i++)//i=
  {
    printf("%d\n",a[i]);
  }
  //sum of array element
  int sum=0;
   for(i=0;i<5;i++)//i=1
  {
    sum=sum+a[i];//102
  }
  printf("sum of array elemet = %d ",sum);
}  