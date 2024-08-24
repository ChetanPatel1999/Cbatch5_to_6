// wap to take matrix element from user and display them.
#include <stdio.h>
void main()
{
    int r,c;
    printf("enter row for matrix :");
    scanf("%d",&r);
    printf("enter coulm for matrix :");
    scanf("%d",&c);
    int mat[r][c];//decalare matrix 3 * 3
    int i,j;
    printf("enter matrix element : \n");
     for(i=0;i<r;i++)//3
    {
      for(j=0;j<c;j++)//3
      {
       printf("enter element pos[%d][%d]: ",i+1,j+1); 
       scanf("%d",&mat[i][j]);
      }
    }
    printf("frist matrix element are : \n");
    for(i=0;i<r;i++)//3
    {
      for(j=0;j<c;j++)//3
      {
        printf("%d ",mat[i][j]);
      }
      printf("\n");
    }
    
   
    
}