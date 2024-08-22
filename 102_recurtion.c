//recursion programm
#include<stdio.h>
//int i=1;
void main()
{
  static int i=1;// its run only one time in
  printf("hello world institute\n");
  i++;//6
  if(i<=5)
  {
    main(); 

  }
}