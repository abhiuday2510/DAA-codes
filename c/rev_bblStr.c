#include<stdio.h>
#include<string.h>
void strRev ()
{
  char str[100];
  printf("enter the string to be reversed\n");
  gets(str);
  int len=strlen(str);
  printf("the reversed string :\n");
  for(int i=len-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }
}
void bblSort ()
{
  char str[50][25],temp[25];
  int n;
  printf("\ninput the number of strings :\n");
  scanf("%d",&n);
  printf("enter the strings :\n");
  for(int i=0;i<n;i++)
  {
    scanf("%s",str[i]);
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<n-i;j++)
    {
      if(strcmp(str[j],str[j+1])>0)
      {
        strcpy(temp,str[j]);
        strcpy(str[j],str[j+1]);
        strcpy(str[j+1],temp);
      }
    }
  }
  printf("sorted string is :\n");
  for (int i=0;i<n;i++)
  {
    printf("%s\n",str[i]);
  }
}
void main()
{
  strRev();
  bblSort();
}
