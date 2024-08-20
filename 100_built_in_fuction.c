//built in fuction
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
 int a=25,p=3;
 int c=-123;
 float r=3.7;
 float t=3.2;
 //float res=pow(a,p);
 printf("pow ans= %.1f\n",pow(a,p));
 printf("sqrt ans= %.1f\n",sqrt(a));
 printf("abosolute ans= %d\n",abs(c));
 printf("ceil value = %.2f\n",ceil(r));//4
 printf("floor value = %.2f\n",floor(r));
 printf("ceil value = %.2f\n",ceil(t));//4
 printf("floor value = %.2f\n",floor(t));
}