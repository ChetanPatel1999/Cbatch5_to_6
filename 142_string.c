//strrev() // reverse given string
#include<stdio.h>
#include<string.h>
int compare(char ch[],char ch1[])
{
  int i;
 if(strlen(ch)!=strlen(ch1))
 {
    return 0;
 }
 else{
     for(i=0;i<(strlen(ch));i++)
     {
       if(ch[i]!=ch1[i])//h!=u
       {
             return 0;
       }
     }
     return 1;
 }
}
void main()
{
 char ch[50]="chetan";
 char ch1[50]="chetun";
 if(compare(ch,ch1)==1)
 {
    printf("string same");
 }
 else
 {
    printf("string diff");
 }

}