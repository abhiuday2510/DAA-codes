#include<stdio.h>
int convert(int);
void main()
{
  int n;
  printf("enter a binary number\n");
  scanf("%d",&n);
  printf("the decimal value of %d is %d",n,convert(n));
}
int convert(int n)
{
  if (n==0)
    return 0;
  else
   return (n%10)+2*convert(n/10);
}
