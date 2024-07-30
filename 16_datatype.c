//data types ,size of memory according to data type
//range ,formate specifire
#include<stdio.h>
void main()
{
	unsigned short int a;
	int b;
	long long int lli;
	char ch;
	float f;
	double d;
	printf("size of short int = %d\n",sizeof(a));
	printf("size of int = %d\n",sizeof(b));
	printf("size of long long int = %d\n",sizeof(lli));
	printf("size of char = %d\n",sizeof(ch));
    signed char h=130;
    unsigned char h1=255;
    double d1=1231.456;
	printf("vale of h = %d\n",h);
	printf("vale of h1 = %d\n",h1);
	printf("vale of d = %lf\n",d1);
	
}
