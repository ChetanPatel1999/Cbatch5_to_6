//wap to print even and odd number from given array.
#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("enter array element : ");
     for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("array element are : ");
    for(i=0;i<5;i++)
    {
     printf("%d ",arr[i]);
    }
    printf("\neven number in array : ");
     for(i=0;i<5;i++)
    {
       if(arr[i]%2==0)
       {
         printf("%d ",arr[i]);
       }
    }
     printf("\nodd number in array : ");
     for(i=0;i<5;i++)
    {
       if(arr[i]%2==1)
       {
         printf("%d ",arr[i]);
       }
    }
}