#include <stdio.h>
#define qmax 5
char q[qmax];
int front=0,rear=-1;
void qinsert();
void qdelete();
void qdisplay();
void main()
{
  int ch;
  printf("\nCircular Queue operations\n");
  printf("1.insert\n2.delete\n3.display\n4.exit\n");
  while(1)
  {
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: qinsert();
      break;
      case 2: qdelete();
      break;
      case 3: qdisplay();
      break;
      case 4: exit(1);
      default: printf("Invalid option\n");
    }
  }
}
void qinsert()
{
  char x;
  if((front==0&&rear==qmax-1)||(front>0&&rear==front-1))
    printf("Queue is overflow\n");
  else
  {
    printf("\nEnter element to be insert:");
    scanf("\n%c",&x);
    if(rear==qmax-1&&front>0)
    {
      rear=0;
      q[rear]=x;
    }
    else
    {
      if((front==0&&rear==-1)||(rear!=front-1))
      q[++rear]=x;
    }
    printf("%c is successfully inserted", x);
  }
}
void qdelete()
{
  char a;
  if((front==0)&&(rear==-1))
  {
    printf("Queue is underflow\n");
    return;
  }
  if(front==rear)
  {
    a=q[front];
    rear=-1;
    front=0;
  }
  else if(front==qmax-1)
  {
    a=q[front];
    front=0;
  }
  else
    a=q[front++];
  printf("Deleted element is:%c\n", a);
}
void qdisplay()
{
  int i,j;
  if(front==0&&rear==-1)
  {
    printf("Queue is underflow\n");
    return;
  }
  if(front>rear)
  {
    for(i=0;i<=rear;i++)
      printf("\t%c",q[i]);
    for(j=front;j<=qmax-1;j++)
      printf("\t%c",q[j]);
    printf("\nrear is at %c\n",q[rear]);
    printf("\nfront is at %c\n",q[front]);
  }
  else
  {
    for(i=front;i<=rear;i++)
      printf("\t%c",q[i]);
    printf("\nrear is at %c\n",q[rear]);
    printf("\nfront is at %c\n",q[front]);
  }
  printf("\n");
}
