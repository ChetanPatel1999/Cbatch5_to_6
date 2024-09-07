#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    char city[] = "indore";
    char mob[] = "8085898780";
    printf("name = %s\n", name);
    printf("city = %s\n", city);
    printf("mobile number = %s\n", mob);
    int i,c=0;
    for(i=0; mob[i]!='\0';i++)
    {
        if(mob[i]=='8')
        {
          c++;  
        }
    }
    printf("total 8 count = %d",c);
}