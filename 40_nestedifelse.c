//example of nested if else
//wap to check given number is even positive or even nagative or odd-positive or odd-nagative.
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num : ");
 scanf("%d",&num); // 13
 if(num==0)
 {
    printf("num is zero");
 }
 else if(num%2==0)
 {
     if(num<0)
     {
        printf("even-nagative");
     }
     else{
        printf("even-positive");
     }
 }
 else
 {
    if(num<0)
     {
        printf("odd-nagative");
     }
     else{
        printf("odd-positive");
     }   
 }
}