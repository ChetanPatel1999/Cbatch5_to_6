//wap to print 1 to 20 even numbers  using recursion.
#include<stdio.h>
void main()
{
  static int i=1;// its run only one time in
  if(i%2==0)
  {
    printf("%d ",i);
  }
  i++;
  if(i<=20)
  {
    main();
  }
}