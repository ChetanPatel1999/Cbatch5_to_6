// wap to take matrix element from user and display thire sum and avrage.
#include <stdio.h>
void main()
{
    int r,c;
    printf("enter row for matrix :");
    scanf("%d",&r);
    printf("enter coulm for matrix :");
    scanf("%d",&c);
    int mat[r][c];
    int i,j;
    printf("enter matrix element : \n");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       printf("enter element pos[%d][%d]: ",i+1,j+1); 
       scanf("%d",&mat[i][j]);
      }
    }
    printf("frist matrix element are : \n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d ",mat[i][j]);
      }
      printf("\n");
    }
    // sum of matrix element 
    int sum=0;
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       sum = sum + mat[i][j];
      }
    }
    printf("sum of matrix elemnet = %d\n",sum);
    printf("avrage of matrix = %.2f",((float)sum/(r*c)));
   
    
}