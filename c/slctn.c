#include<stdio.h>
void main()
{
  int i,j,min,loc,n,temp;
  printf("enter n\n");
  scanf("%d",&n);
  int a[n];
  printf("enter array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    min=a[i];
    loc=i;
    for(j=i+1;j<n;j++)
    {
      if(min>a[j])
      {
        min=a[j];
        loc=j;
      }
    }
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
  }
  printf("sorted array=\n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
