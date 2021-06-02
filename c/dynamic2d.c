#include <stdio.h>
#include <stdlib.h>
void main()
{
  int **a,p,q;
  int **make2darray();
  printf("enter the no of rows ");
  scanf("%d",&p);
  printf("\n enter the no of columns ");
  scanf("%d",&q);
  a=make2darray(p,q);
  printf("\n successful memory creation address is %d , %d",a,&a);
}
int **make2darray(int rows,int cols)
{
  int **x,i;
  x=malloc(rows*sizeof(*x));
  printf("\ncalled function %d , %d \n",x,&x);
  for(i=0;i<rows;i++)
    x[i]=malloc(cols*sizeof(**x));
  return x;
}
