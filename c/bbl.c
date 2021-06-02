#include<stdio.h>
int main()
{
  int i,j,t,n;
  printf("enter array size\n");
  scanf("%d",&n);
  int a[n];

  printf("enter array elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(i=0;i<n;i++)
    for(j=0;j<(n-(i+1));j++)
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }

  printf("sorted arrar :-\n");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
