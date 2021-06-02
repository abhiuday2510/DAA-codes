#include <stdio.h>
int main()
{
  int n;
  float amt;
  char name[20];
  printf("enter the user's name\n");
  scanf("%s",name);
  printf("enter the usage of electricity in units\n");
  scanf("%d",&n);
  if (n<=200)
    amt=n*0.80;
  else if(n<=300)
    amt=200*0.80+(n-200)*0.90;
  else
    amt=200*0.80+100*0.90+(n-300)*1;
  amt+=100;
  if (amt>400)
    amt+=0.15*amt;
  printf("total amount to be paid = Rs. %.2f\n",amt);
}
