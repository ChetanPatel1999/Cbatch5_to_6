//dyanamic memory allocation using melloc fuction
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i;
 int *ptr,*temp;
 int n;
 printf("enter dyanamic array size :");
 scanf("%d",&n);
 ptr=(int*)calloc(n,sizeof(int));
 temp=ptr;
 //11 22 33 44 55
 printf("enter dyanamic array element :");
 for(i=0;i<n;i++)//5
 {
    scanf("%d",ptr);
    ptr++;//420
 }
 ptr=temp;//400
 int sum=0;
 printf("array element are : ");
 for(i=0;i<n;i++)
 {
    printf("%d ",*ptr);
    sum=sum+*ptr;
    ptr++;//408
 }
 printf("\nsum of all element = %d",sum);
 ptr=temp;
 free(ptr);
}