//wap to take two number from user and display sum.
#include<stdio.h>
void main()
{
	int num1,num2,sum;
	printf("this is addition app \n");
	printf("____________________________\n");
	printf("enter frist number : ");
    scanf("%d",&num1);//its take data from user
    printf("enter second number : ");
    scanf("%d",&num2);
	printf("value of num1 : %d\n",num1);
	printf("value of num2 : %d\n",num2);
	sum=num1+num2;
	printf("sum of %d and %d : %d",num1,num2,sum);
}
