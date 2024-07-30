//wap to take two number from user and display sum.
#include<stdio.h>
void main()
{
	float num1,num2,sum;
	printf("this is addition app \n");
	printf("____________________________\n");
	printf("enter frist number : ");
    scanf("%f",&num1);//its take data from user
    printf("enter second number : ");
    scanf("%f",&num2);
	printf("value of num1 : %.1f\n",num1);
	printf("value of num2 : %.1f\n",num2);
	sum=num1+num2;
	printf("sum of %.1f and %.1f : %.1f",num1,num2,sum);
}
