//wap to print greteast number beetween three numbers..
#include<stdio.h>
void main()
{
	int num1,num2,num3,ans;
	printf("enter two numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);//12 8
    ans= num1>num2? (num1>num3?num1:num3) : (num2>num3?num2:num3);
    printf("greatest num = %d",ans);
}
