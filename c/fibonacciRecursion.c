#include<stdio.h>
int findfib(int);
void main()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("fibonacci of %d=%d",n,findfib(n));
}
int findfib(int n)
{
  if (n==0)
    return 0;
  else if (n==1)
    return 1;
  else
    return findfib(n-1)+findfib(n-2);
}
