// wap to take two matrix from user and dipslay sum of two matrix.
#include <stdio.h>
void main()
{
    int r,c;
    printf("enter row for matrix :");
    scanf("%d",&r);
    printf("enter coulm for matrix :");
    scanf("%d",&c);
    int mat1[r][c],mat2[r][c],matsum[r][c];
    int i,j;
    printf("enter mat1 element : \n");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       printf("enter element pos[%d][%d]: ",i+1,j+1); 
       scanf("%d",&mat1[i][j]);
      }
    }



    printf("enter mat2 element : \n");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       printf("enter element pos[%d][%d]: ",i+1,j+1); 
       scanf("%d",&mat2[i][j]);
      }
    }



    printf("mat1 element are : \n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d ",mat1[i][j]);
      }
      printf("\n");
    }  


     printf("mat2 element are : \n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d ",mat2[i][j]);
      }
      printf("\n");
    } 

    // sum two matric code
      for(i=0;i<r;i++)//1
    {
      for(j=0;j<c;j++)//0
      {
          matsum[i][j]=mat1[i][j] + mat2[i][j];
      }
    }

     // dipslay matsum matrix 
     printf("matsum element are : \n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d ",matsum[i][j]);
      }
      printf("\n");
    }

}