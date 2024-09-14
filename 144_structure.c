#include<stdio.h>
#include<string.h>
struct student
{
 char name[20];
 int rno;
 float per; 
};
void main()
{
   struct student s1,s2;

   printf("enter name : ");
   scanf("%s",s1.name);
   printf("enter rno : ");
   scanf("%d",&s1.rno);
   printf("enter per : ");
   scanf("%f",&s1.per);


   printf("enter name : ");
   scanf("%s",s2.name);
   printf("enter rno : ");
   scanf("%d",&s2.rno);
   printf("enter per : ");
   scanf("%f",&s2.per);

   printf("student info : \n");
   printf("name  : %s\n",s1.name);
   printf("rno  : %d\n",s1.rno);
   printf("per  : %.2f\n",s1.per);
   
   printf("student info : \n");
   printf("name  : %s\n",s2.name);
   printf("rno  : %d\n",s2.rno);
   printf("per  : %.2f\n",s2.per);


}