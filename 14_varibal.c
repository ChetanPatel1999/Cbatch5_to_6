//variable name rules
//varibales type
//local variable:-we can acces inside fuction only where varible is declared.
//global variable:- we can access global variable  from every fuction present in programm.
#include<stdio.h>
int hi=77;//globla varaible
void fun()
{
 int var2=90;//loacal varible
  printf("%d\n",var2);	
 printf("%d\n",hi);	
}
void main()
{
	int var1=12;//local varible
	 printf("%d\n",);	
	printf("value  of hi = %d\n",hi);
	fun();
} 
