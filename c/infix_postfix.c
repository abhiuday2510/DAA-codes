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
  char infix[20],postfix[20];
  int i,j=0;
  printf("\nEnter valid INFIX expression\n");
  gets(infix);
  push('#');
  for(i=0;infix[i]!='\0';i++)
  {
    if(isalnum(infix[i]))
      postfix[j++]=infix[i];
    else if(infix[i]=='(')
      push('(');
    else if(infix[i]==')')
    {
      while(s[top]!='(')
      {
        postfix[j++]=pop();
      }
      pop();
    }
    else
    {
      while(priority(s[top])>=priority(infix[i]))
      {
        postfix[j++]=pop();
      }
      push(infix[i]);
    }
  }
  while(s[top]!='#')
  {
    postfix[j++]=pop();
  }
  postfix[j]='\0';
  printf("\n INFIX EXPRESSION = %s",infix);
  printf("\n POSTFIX EXPRESSION = %s",postfix);
}
