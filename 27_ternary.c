//wap to print greteast number beetween two numbers..
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter two numbers : ");
	scanf("%d%d",&num1,&num2);//12 8
    num1>num2? printf("gretaest num = %d",num1) : printf("gretaest num = %d",num2);
}
