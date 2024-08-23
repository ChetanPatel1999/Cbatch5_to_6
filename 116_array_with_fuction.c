// array with fuction
#include <stdio.h>
int arrsum(int a[], int s)
{
    int i, sum = 0;
    for (i = 0; i < s; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int arrmax(int a[],int s)
{
    int i, max=a[0];
    for(i=0;i<s;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void arrdisp(int a[],int s)
{
    int i;
    printf("\narray elemt are : ");
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
}
void revarrdisp(int a[],int s)
{
    int i;
    printf("\nreverse array elemt are : ");
    for(i=s-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int arr1[5] = {12, 3, 4, 6, 7};
    int arr2[4] = {6, 2, 4, 8};
    int arr3[2] = {12 ,13};
    printf("sum of array element = %d\n",arrsum(arr1,5));
    printf("sum of array element = %d\n",arrsum(arr2,4));
    printf("sum of array element = %d\n",arrsum(arr3,2));  
    printf("max array element = %d\n",arrmax(arr1,5));
    printf("max array element = %d\n",arrmax(arr2,4));
    printf("max array element = %d\n",arrmax(arr3,2)); 

    arrdisp(arr1,5);
    arrdisp(arr2,4);
    arrdisp(arr3,2);
    revarrdisp(arr1,5);
    revarrdisp(arr2,4);
    revarrdisp(arr3,2);
    
}