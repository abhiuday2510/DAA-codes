#include<stdio.h>
#include<stdlib.h>
_Bool checkForWin(char tt[])
{
  if(((tt[0]==tt[1])&&(tt[1]==tt[2]))||
     ((tt[2]==tt[5])&&(tt[5]==tt[8]))||
     ((tt[8]==tt[7])&&(tt[7]==tt[6]))||
     ((tt[6]==tt[3])&&(tt[3]==tt[0]))||
     ((tt[1]==tt[4])&&(tt[4]==tt[7]))||
     ((tt[3]==tt[4])&&(tt[4]==tt[5]))||
     ((tt[0]==tt[4])&&(tt[4]==tt[8]))||
     ((tt[2]==tt[4])&&(tt[4]==tt[6])))
     {
       return 1;
     }
     else
     {
      return 0;
     }
}
void drawBoard()
{
  printf("\n\t\t  TIC TAC TOE  \n\n");
  printf("Player :1=>X\nPlayer :2=>0\n\n");
  printf("\t\t|\t\t|\n\t1\t|\t2\t|\t3\n________________|_______________|________________\n\t\t|\t\t|\n");
  printf("\t4\t|\t5\t|\t6\n________________|_______________|________________\n\t\t|\t\t|\n");
  printf("\t7\t|\t8\t|\t9\n\t\t|\t\t|\n");
}
void markBoard(char tt[])
{
  system("cls");
  printf("\n\t\t  TIC TAC TOE  \n\n");
  printf("Player :1=>X\nPlayer :2=>0\n");
  printf("\t\t|\t\t|\n\t%c\t|\t%c\t|\t%c\n________________|_______________|________________\n\t\t|\t\t|\n",((tt[0]=='X')||(tt[0]=='0'))?tt[0]:' ',((tt[1]=='X')||(tt[1]=='0'))?tt[1]:' ',((tt[2]=='X')||(tt[2]=='0'))?tt[2]:' ');
  printf("\t%c\t|\t%c\t|\t%c\n________________|_______________|________________\n\t\t|\t\t|\n",((tt[3]=='X')||(tt[3]=='0'))?tt[3]:' ',((tt[4]=='X')||(tt[4]=='0'))?tt[4]:' ',((tt[5]=='X')||(tt[5]=='0'))?tt[5]:' ');
  printf("\t%c\t|\t%c\t|\t%c\n\t\t|\t\t|\n",((tt[6]=='X')||(tt[6]=='0'))?tt[6]:' ',((tt[7]=='X')||(tt[7]=='0'))?tt[7]:' ',((tt[8]=='X')||(tt[8]=='0'))?tt[8]:' ');
}
void main()
{
  char tt[9]={'1','2','3','4','5','6','7','8','9'};
  drawBoard();
  int i=1,x;
  while (0==0)
  {
    if(i<=9)
    {
    if(i%2!=0)
    {
      m:printf("Player 1's turn: ");
      scanf("%d",&x);
      if((x>0)&&(x<10)&&(tt[x-1]!='X')&&(tt[x-1]!='0'))
      {
        tt[x-1]='X';
      }
      else
      {
        printf("Invalid input,dont worry..press any key to try again\n");
        getch();
        goto m;
      }
    }
    else
    {
      n:printf("Player 2's turn: ");
      scanf("%d",&x);
      if((x>0)&&(x<10)&&(tt[x-1]!='X')&&(tt[x-1]!='0'))
      {
        tt[x-1]='0';
      }
      else
      {
        printf("Invalid input,dont worry..press any key to try again\n");
        getch();
        goto n;
      }
    }
    markBoard(tt);
    if (checkForWin(tt)==1)
    {
     if(((tt[0]==tt[1])&&(tt[1]==tt[2])&&(tt[0]=='X'))||
        ((tt[2]==tt[5])&&(tt[5]==tt[8])&&(tt[2]=='X'))||
        ((tt[8]==tt[7])&&(tt[7]==tt[6])&&(tt[8]=='X'))||
        ((tt[6]==tt[3])&&(tt[3]==tt[0])&&(tt[6]=='X'))||
        ((tt[1]==tt[4])&&(tt[4]==tt[7])&&(tt[1]=='X'))||
        ((tt[3]==tt[4])&&(tt[4]==tt[5])&&(tt[3]=='X'))||
        ((tt[0]==tt[4])&&(tt[4]==tt[8])&&(tt[0]=='X'))||
        ((tt[2]==tt[4])&&(tt[4]==tt[6])&&(tt[2]=='X')))
     {
       printf("CONGRATULATIONS:Player 1 won");
       break;
     }
     else
     {
       printf("CONGRATULATIONS:Player 2 won");
       break;
     }
   }
 }
 else
 {
   printf("GAME IS TIED");
   break;
 }
 i++;
}
}
