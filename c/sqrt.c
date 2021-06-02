#include<stdio.h>
#include<math.h>
int main()
{
  float x,n,s;
  printf("enter the no.\n");
  scanf("%f",&n);
  if (n>=0)
  {
    for(s=1;s*s<=n;s++);
    s--;
    for(x=s+0.001;x*x<=n;x+=0.001);
    x-=0.001;
    printf("the calculated square root=%.3f\n",x);
    printf("the inbuilt sqrt=%.3f\n",sqrt(n));
  }
  else
    printf("No sqr root to a -ve no.\n");
}
