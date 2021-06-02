#include<stdio.h>
void main()
{
  char ch;
  int a,b;
  printf("enter an operator\n");
  scanf("%c",&ch);
  printf("enter two nos. on which operation is to be performed\n");
  scanf("%d %d",&a,&b);
  switch(ch)
  {
    case'+':printf("sum of nos.=%d",(a+b));
             break;
    case'-':printf("\ndifference of nos.=%d",(a-b));
             break;
    case'*':printf("\nproduct of nos.=%d",(a*b));
             break;
    case'/':if(b!=0)
              printf("\ndivision of nos.=%d",(a/b));
            else
              printf("\ndivision by 0");
            break;
    default :printf("invalid input");
             break;
  }
}
