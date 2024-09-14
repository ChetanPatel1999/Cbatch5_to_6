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
   struct student s1,s2={"shyam",1002,56.78};
   printf("size of student = %d byte\n",sizeof(s1));
   strcpy(s1.name,"ram");
   s1.rno=1001;
   s1.per=89.67;
   printf("student info : \n");
   printf("name  : %s\n",s1.name);
   printf("rno  : %d\n",s1.rno);
   printf("per  : %.2f\n",s1.per);
   printf("student info : \n");
   printf("name  : %s\n",s2.name);
   printf("rno  : %d\n",s2.rno);
   printf("per  : %.2f\n",s2.per);


}