#include<stdio.h>
int cntlnth(char *const ptr)
{
  char *count=ptr;
  while(*count)
  {
    count++;
  }
  return (count-ptr);
}
void main()
{
  char arr[]="this is my string";
  printf("length of my string =%d",cntlnth(arr));
}
