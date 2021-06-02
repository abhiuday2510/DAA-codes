#include<stdio.h>
int findfact(int);
void main()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("fact of %d=%d\n",n,findfact(n));
}
int findfact(int num)
{
  if (num==0)
    return 1;
  else
    return num*findfact(num-1);
}
