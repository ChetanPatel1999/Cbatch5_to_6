//enum : it is a user defind data type which used to store constant integer values.
#include<stdio.h>
enum day{mon=12,tue,wed,thu=90,fri,sat,sun};
void main()
{
 int ans;
 ans=mon+tue;
 printf("mon = %d\n",mon);
 printf("tue = %d\n",tue);
 printf("wed = %d\n",wed);
 printf("thu = %d\n",thu);
 printf("fri = %d\n",fri);
 printf("sat = %d\n",sat);
 printf("sun = %d\n",sun);
}