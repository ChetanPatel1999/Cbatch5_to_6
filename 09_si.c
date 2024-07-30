//simple interest
#include<stdio.h>
void main()
{
	float principal,rate,time,si;
	printf("enter principal amount : ");
	scanf("%f",&principal);
	printf("enter rate : ");
	scanf("%f",&rate);
	printf("enter time : ");
	scanf("%f",&time);
	si=(principal*rate*time)/100;
	printf("principal amount : %.2f\n",principal);
	printf("rate : %.2f\n",rate);
	printf("time : %.2f\n",time);
	printf("simple interest : %.2f",si);
	
}
