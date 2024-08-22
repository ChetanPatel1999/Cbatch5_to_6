//array example
#include<stdio.h>
void main()
{
  int a[]={12,34,56,78,90};
  printf("sizd of array = %d\n",sizeof(a));
  printf("%d\n",a[0]);
  printf("%d\n",a[1]);
  printf("%d\n",a[2]);
  printf("%d\n",a[3]);
  printf("%d\n",a[4]);
  a[3]=100;// change array value at index 3
  printf("after change array value\n");
  printf("%d\n",a[3]);

  printf("adress of array elemet :\n");
  printf("%d\n",a);
  printf("%d\n",&a[0]);
  printf("%d\n",&a[1]);
  printf("%d\n",&a[2]);
  printf("%d\n",&a[3]);
  printf("%d\n",&a[4]);
}