// tyepdef  user define data type
#include<stdio.h>
typedef int i;
typedef char ch;
typedef long long int lli;
typedef long double ld;
struct student_of_10th_class_b_section 
{
  int rno;
  float per;
};
typedef struct student_of_10th_class_b_section st10thb;
void main()
{
 st10thb s1;   
 i a;
 ch b;
 lli c;
 ld d;
 printf("size of int = %d byte\n",sizeof(a));
 printf("size of char = %d byte\n",sizeof(b));
 printf("size of long long int = %d byte\n",sizeof(c));
 printf("size of long double = %d byte\n",sizeof(d));
}