//wap to search 3 in given number.
#include<stdio.h>
void main()
{
 int num,rem,f=0;
 printf("enter a num : ");
 scanf("%d",&num);//5675
 while(num)
 {
    rem=num%10;
    if(3==rem)
    {
      f=1;
      break;
    }
    num=num/10;
 }
 
 if(f==1)
 {
    printf("3 is find in given num");  
 }
 else{
    printf("3 is not found");
 }
}