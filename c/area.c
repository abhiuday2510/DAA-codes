#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,s,ar;
  printf("enter dimensions\n");
  scanf("%f %f %f",&a,&b,&c);
  s=(a+b+c)/2;
  ar=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area =%f",ar);
  return;
}
