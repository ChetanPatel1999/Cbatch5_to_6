// union user define data type
#include <stdio.h>
#include <string.h>
union student
{
    char name[4]; // data memebr
    int rno;       // data memebr
    float per;     // data memebr
};
void main()
{
    union student s1;
    printf("size of student = %d byte\n", sizeof(s1));
    strcpy(s1.name, "ram");
    printf("name  : %s\n", s1.name);
    s1.rno = 1001;
    printf("rno  : %d\n", s1.rno);
    s1.per = 89.67;
    printf("per  : %.2f\n", s1.per);
}