// wap to find graetest marks of student.
#include<stdio.h>
void main()
{
 int marks[5],i;
 printf("enter 5 student marks : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",&marks[i]);
 }
 printf("display marks : ");
 for(i=0;i<5;i++)
 {
    printf("%d ",marks[i]);
 }
 //find greatest number 
 // 123 45 678 8 33
 int max=marks[0];//678
  for(i=0;i<5;i++)//5
 {
    if(max<marks[i])
    {
        max=marks[i];
    }
 }
 printf("max marks = %d",max);

 
}