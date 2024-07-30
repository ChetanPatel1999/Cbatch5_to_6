//logical operator
#include<stdio.h>
void main()
{
 int a =12,b=6;
 int ans;
 //ans=(7<a) && 81>9 && a!=b;
 ans=!(!(71<a) || 8>9 || a!=b);
 //ans=!(12<18);
 printf("ans = %d",ans);
}
