#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,r1,r2,d;
  printf("enter the a,b,c of the equation\n");
  scanf("%f %f %f",&a,&b,&c);
  if(a==0&&b==0)
  {
    printf("invalid input\n");
  }
  else if(a==0)
  {
    printf("its a linear equation with the root=%f",(-c/b));
  }
  else
  {
    d=(b*b)-(4*a*c);
    if(d==0)
    {
      printf("\nthe roots are real and equal and are =%f",(-b/(2*a)));
    }
    else if(d>0)
    {
      r1=(-b+sqrt(d))/(2*a);
      r2=(-b-sqrt(d))/(2*a);
      printf("the roots are real & distinct and are %f and %f\n",r1,r2);
    }
    else
    {
      printf("the roots are imaginary\n");
      r1=-b/(2*a);
      r2=(sqrt(fabs(d)))/(2*a);
      printf("the roots are %f+i%f and %f-i%f",r1,r2,r1,r2);
    }
  }
}
