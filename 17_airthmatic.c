//airtmatic variable
#include<stdio.h>
void main()
{
	int num1,num2,ans;
	printf("this is addition app \n");
	printf("____________________________\n");
	printf("enter frist number : ");
    scanf("%d",&num1);//its take data from user
    printf("enter second number : ");
    scanf("%d",&num2);
	printf("value of num1 : %d\n",num1);
	printf("value of num2 : %d\n",num2);
	//ans=num1/num2;
	ans=num1%num2;
	printf("ans of %d mod %d : %d",num1,num2,ans);
}
