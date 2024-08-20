//recursion programm
#include<stdio.h>
//int i=1;
void main()
{
  static int i=1;// its run only one time in
  printf("hello world institute\n");
  i++;
  if(i<=5)
  {
    main();
  }
}