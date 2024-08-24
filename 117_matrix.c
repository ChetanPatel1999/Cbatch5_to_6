// 2 d array used for matrix store and operation on it
// store matrix in program and display them 
#include <stdio.h>
void main()
{
      //    r  c
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {14, 15, 16}};
    int mat2[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    printf("frist matrix element are : \n");
    for(i=0;i<3;i++)//3
    {
      for(j=0;j<3;j++)//3
      {
        printf("%d ",mat[i][j]);//12 34 56 11 22 33 14 15 16
      }
      printf("\n");
    }
     printf("second matrix element are : \n");
    for(i=0;i<2;i++)//3
    {
      for(j=0;j<3;j++)//3
      {
        printf("%d ",mat[i][j]);
      }
      printf("\n");
    }

   
    
}