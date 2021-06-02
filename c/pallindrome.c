#include <stdio.h>
int main()
{
  int n,num,rem,rev=0;
  printf("enter a positive integer\n");
  scanf("%d",&num);
  if(num>0)
  {
    n=num;
    while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n/=10;
    }
    printf("the reverse of %d is %d\n",num,rev);
    if (rev==num)
      printf("%d is pallindrome\n",num);
    else
      printf("%d is not a pallindrome\n",num);
  }
  else
    printf("the input is not a positive integer\n");
}
