//wap to print 1 to 10 using recursion.
#include<stdio.h>
void main()
{
  static int i=1;// its run only one time in
  printf("%d ",i);
  i++;
  if(i<=10)
  {
    main();
  }
}