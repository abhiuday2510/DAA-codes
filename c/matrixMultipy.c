#include<stdio.h>
int main()
{
  int m,n,p,q,i,j,k;
  printf("enter the order of 1st matrix\n");
  scanf("%d %d",&m,&n);
  printf("enter the order of 2nd matrix\n");
  scanf("%d %d",&p,&q);
  int a1[m][n],a2[p][q],a3[10][10];
  if(n==p)
  {
    printf("enter elements of 1st matrix\n");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a1[i][j]);
    printf("enter elements of 2nd matrix\n");
    for(i=0;i<p;i++)
      for(j=0;j<q;j++)
        scanf("%d",&a2[i][j]);
    for(i=0;i<m;i++)
      for(j=0;j<q;j++)
      {
        a3[i][j]=0;
        for(k=0;k<n;k++)
          a3[i][j]+=a1[i][k]*a2[k][j];
      }
    printf("multiplied matrix is :-\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        printf("%d\t",a3[i][j]);
      printf("\n");
    }
  }
  else
    printf("matrix multiplication not possible");
}
