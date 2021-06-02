#include<stdio.h>
#include<conio.h>
#include<ctype.h>
char s[100];
int top=-1;
void push(char opr)
{
  s[++top]=opr;
}
char pop()
{
  return(s[top--]);
}
int priority(char opr)
{
  if(opr=='('||opr=='#') return(1);
  if(opr=='+'||opr=='-') return(2);
  if(opr=='*'||opr=='/' || opr=='%') return(3);
  if(opr=='^')return(4);
}
void main()
{
  char inf[20],post[20];
  int i,j=0;
  printf("enter a valid infix expression\n");
  gets(inf);
  push('#');
  for(i=0;inf[i]!='\0';i++)
  {
    if(isalnum(inf[i]))
      post[j++]=inf[i];
    else if(inf[i]=='(')
      push('(');
    else if(inf[i]==')')
    {
      while(s[top]!='(')
        post[j++]=pop();
      pop();
    }
    else
    {
      while(priority(s[top]>=priority(inf[i])))
        post[j++]=pop();
      push(inf[i]);
    }
  }
  while(s[top]!='#')
    post[j++]=pop();
  post[j]='\0';
  printf("\n INFIX EXPRESSION = %s",inf);
  printf("\n POSTFIX EXPRESSION = %s",post);
}
