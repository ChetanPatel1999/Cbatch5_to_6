#include<stdio.h>
void main()
{
  int bornyear,age,num;//2000
  printf("enter a bornyear : ");
  scanf("%d",&bornyear); // 
  age=2024-bornyear;
  if(age>=18)
  {
    printf("welcome to my club ...\n");
    printf("____________________________\n");
    printf("club menue :  \n");
    printf("1. pasta : 100\n");
    printf("2. noodles : 70\n");
    printf("3. sandwitch : 120\n");
    printf("please select item and order : ");
    scanf("%d",&num);
    if(num==1)
    {
       printf("your pasta order conform please pay 100rs");
    }
    else if (num==2)
    {
        printf("your noodles order conform please pay 70 rs");
    }
    else if (num==3)
    {
         printf("your sandwitch order conform please pay 120rs");
    }
    else{
        printf("please enter write number ");
    }
    

  }
  else{
    printf("sorry bro ! try after %d years",18-age);
  }
}