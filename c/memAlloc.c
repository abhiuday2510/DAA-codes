#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  int b;
  printf("enter the number of bytes you want for string\n");
  scanf("%d",&b);
  char *ptr=(char*)malloc(b*sizeof(char));
  if(ptr!=NULL)
  {
    printf("enter the string :\n");
    scanf(" ");
    gets(ptr);
    printf("the inputted string is : %s",ptr);
  }
  free(ptr);
  ptr=NULL;
}
