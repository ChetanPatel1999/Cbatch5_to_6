// zero division error is run time error
#include <stdio.h>
void main()
{
    int num1, num2, div;
    printf("this is division app \n");
    printf("____________________________\n");
    printf("enter drist number : ");
    scanf("%d", &num1); // its take data drom user
    printf("enter second number : ");
    scanf("%d", &num2);
    printf("value of num1 : %d\n", num1);
    printf("value of num2 : %d\n", num2);
    div = num1/num2;
    printf("div of %d and %d : %d\n", num1, num2, div);
    printf("end programm succefully");
}