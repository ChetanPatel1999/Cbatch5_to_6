#include<stdio.h>
void main()
{
	int a=13,b=6;
	printf("value of a = %d \n",a);//13
	printf("value of b = %d \n",b);//6
	//a+=b;//a=a+b
    //b-=a;
    //a*=b;
    // a/=b;
    a%=b;
	printf("value of a = %d \n",a);//1
	printf("value of b = %d \n",b);//6	
}
