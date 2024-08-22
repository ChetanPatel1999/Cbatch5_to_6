//wap to take array elemet from user and display them and display their sum.
#include<stdio.h>
void main()
{
  int n;
  printf("enter array size :");
  scanf("%d",&n);
  int a[n];//create a integer array which store 5 elemet garbage
  int i;
  printf("enter array element : \n");
  for(i=0;i<n;i++)//1
  {
    scanf("%d",&a[i]);
  }
  a[2]=888;
  printf("array elemet are : \n");
  for(i=0;i<n;i++)//i=
  {
    printf("%d\n",a[i]);
  }
  //sum of array element
  int sum=0;
   for(i=0;i<n;i++)//i=1
  {
    sum=sum+a[i];//102
  }
  printf("sum of array elemet = %d ",sum);
}  