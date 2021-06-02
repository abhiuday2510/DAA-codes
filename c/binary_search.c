#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,key,n,m;
  printf("enter no. of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("enter key element to be searched\n");
  scanf("%d",&key);
  printf("enter array elements in ascending order\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int l=0,h=n-1;
  while(l<=h)
  {
    m=(l+h)/2;
    if(a[m]==key)
    {
      printf("element found at pos=%d\n",m+1);
      exit(0);
    }
    else if(a[m]>key)
      h=m-1;
    else
      l=m+1;
  }
  printf("element not found");
}
