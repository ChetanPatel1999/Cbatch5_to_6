#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rno;
    float per;
};
void _80per(struct student s[])
{
    int i;
    printf("all student name which percent above than 80 :\n");
    for(i=0;i<3;i++)
    {
        if(s[i].per>80)
        {
            printf("name : %s\n",s[i].name);
        }
    }
}
void main()
{
    struct student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter name : ");
        scanf("%s", s[i].name);
        printf("enter rno : ");
        scanf("%d", &s[i].rno);
        printf("enter per : ");
        scanf("%f", &s[i].per);
    }
    for (i = 0; i < 3; i++)
    {

        printf("student info : \n");
        printf("name  : %s\n", s[i].name);
        printf("rno  : %d\n", s[i].rno);
        printf("per  : %.2f\n", s[i].per);
    }
    _80per(s);

}