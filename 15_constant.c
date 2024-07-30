//constant variable
//wap to calculate area of circle.
#include<stdio.h>
void main()
{
/*	const int a=12;
	printf("%d\n",a);
	printf("%d\n",a);*/
	float area,radius;
	const float pi=3.141;
	printf("enter radius :");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("arae of circle which radius %.2f = %.2f",radius,area);
	
}
