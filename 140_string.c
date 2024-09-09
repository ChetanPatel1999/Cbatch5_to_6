// strcat() // combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50] = "chetan";
    char ch1[50] = "patel";
    printf("string : %s\n", ch);
    printf("string : %s\n", ch1);
    strcat(ch," ");
    strcat(ch, ch1); // its combine ch and ch1 and assing in ch
    printf("string : %s\n", ch);
}