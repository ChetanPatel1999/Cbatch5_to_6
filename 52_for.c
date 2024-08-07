//wap to print factors given number .
#include<stdio.h>
void main()
{
 int num,i;
 printf("enter num : ");
 scanf("%d",&num);//12 
 printf("factors of %d : ",num);
 for(i=1;i<=num;i++)
 {
    if(num%i==0)
    {
        printf("%d ",i);//1 2 3 4 6 
    }
 }
}
