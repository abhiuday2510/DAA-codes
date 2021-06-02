#include<stdio.h>
#include<math.h>
int isPrime(int);
int main()
{
  int n;
  printf("enter a no.\n");
  scanf("%d",&n);
  isPrime(n)?printf("%d is prime\n",n):printf("%d is not prime\n",n);
}
int isPrime(int num)
{
  if (num==0||num==1)
    return 0;
  for(int i=2;i<=sqrt(num);i++)
    if (num%i==0)
      return 0;
  return 1;
}
