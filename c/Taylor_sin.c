  #include<stdio.h>
#include<math.h>
int main()
{
  int i,d;
  float x,sum=0,term,nume,deno;
  printf("enter degrees\n");
  scanf("%d",&d);
  x=d*(3.142/180);
  nume=x;
  deno=1;
  i=2;
  do
  {
    term  = nume/deno;
    nume=-nume*x*x;
    deno=deno*i*(i+1);
    i+=2;
  }while(fabs(term)>=0.00001);
  printf("the calculated sine value=%.3f\n",sum);
  printf("the built in sine value =%.3f\n",sin(x));
}
