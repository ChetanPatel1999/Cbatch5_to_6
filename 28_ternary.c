//wap to print greteast number beetween two numbers..
#include<stdio.h>
void main()
{
	int num1,num2,ans;
	printf("enter two numbers : ");
	scanf("%d%d",&num1,&num2);//12 8
    ans= num1>num2? num1 : num2;
    printf("greatest num = %d",ans);
}
