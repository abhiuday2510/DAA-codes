#include<stdio.h>
#include<string.h>

int length(char[]);
int compare(char[],char[]);
void concat(char[],char[]);

void main()
{
  char s1[100],s2[100];
  int len,res;
  printf("enter 2 strings\n");
  scanf("%s %s",s1,s2);
  printf("length of 1st string= %d\n",length(s1));
  compare(s1,s2)?printf("strings are equal\n"):printf("strings are not equal\n");
  concat(s1,s2);
  printf("concatinated string : %s\n",s1);
}
int length(char s1[])
{
  int i;
  for(i=0;s1[i]!='\0';i++);
  return i;
}
int compare(char s1[],char s2[])
{
  for(int i=0;s1[i]!='\0';i++)
    if(s1[i]!=s2[i])
      return 0;
  return 1;
}
void concat(char s1[],char s2[])
{
  int j,i=strlen(s1);
  for(j=0;s2[j]!='\0';j++)
  {
    s1[i]=s2[j];
    i++;
  }
  s1[i]='\0';
}
