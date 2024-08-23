//wap to count even and odd number in given array.
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
    printf("\n");
    //count even odd number
    int ec=0,oc=0;
     for(i=0;i<5;i++)
    {
      if(arr[i]%2==0)
      {
         ec++;
         printf("%d even number = %d\n",ec,arr[i]);
      }
    }
      for(i=0;i<5;i++)
    {
      if(arr[i]%2==1)
      {
         oc++;
         printf("%d odd number = %d\n",oc,arr[i]);
      }
    }
    printf("\ntotal even number = %d\n",ec);
    printf("total odd number = %d\n",oc);
}