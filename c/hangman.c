#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int wrd_len,count=0;

const char *word[] = {
    "bear"
  ,  "zebra"
  ,  "lion"
  ,  "butterfly"
  ,  "dog"
  ,  "kangaroo"
  ,  "dolphin"
  ,  "tiger"
  ,  "elephant"
  ,  "giraffe"
  ,  "ducks"
  ,  "horse"
};

#define ar_len (sizeof(word) / sizeof(const char *))

char stack[7];
int top = -1;
void push(char letter)
{
  /*if (top == (26-1))
  {
    printf("OPPS..!..you have chosen all the possible letters");
  }*/

  //else
    stack[++top] = letter;
    //stack[]=' ';
}
/*int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
char pop() {
   char data;

   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("No letter selection done yet");
   }
}*/

//char stack[6];
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

void draw()
{
  printf("\n\t\tH A N G M A N\n\n");
  printf("HEY THERE !!\nWELCOME TO HANGMAN\t\tFinish the WORD by guessing its letters\n\nREMEMBER THE ONLY RULE : DON'T LET THE MAN DIE\n\n");
  printf("\t\t______________\n\t\t|            |\n\t\t|            |\n");
  printf("\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t          ___|___");
  printf("\n\t\t        -----------\n\n\n");
  printf("\t");
  for(int i=1;i<=wrd_len;i++)
  {
    printf("__ ");
  }
  printf("\n\n");
}

void redraw(char *rs, int rs_len)
{
  int ch=top-1;
  system("cls");
  printf("\n\t\tH A N G M A N\n\n");
  printf("HEY THERE !!\nWELCOME TO HANGMAN\n\nREMEMBER THE ONLY RULE : DON'T LET THE MAN DIE\n\n");
  printf("\t\t______________\n\t\t|            |\n\t\t|            |\n");
  switch(ch)
  {
    case 0:printf("\t       ( )           |\n");
    break;
    case 1:printf("\t       ( )           |\n\t\t|            |\n\t\t|            |\n\t\t|            |\n");
    break;
    case 2:printf("\t       ( )           |\n\t\t|            |\n\t       /|            |\n\t\t|            |\n");
    break;
    case 3:printf("\t       ( )           |\n\t\t|            |\n\t       /|\\           |\n\t\t|            |\n");
    break;
    case 4:printf("\t       ( )           |\n\t\t|            |\n\t       /|\\           |\n\t\t|            |\n\t       /             |\n");
    break;
    case 5:printf("\t       ( )           |\n\t\t|            |\n\t       /|\\           |\n\t\t|            |\n\t       / \\           |\n");
    break;
  }
  printf("\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t             |\n\t\t          ___|___");
  if (top==6)
  {
    printf("\t\tOPPSS ! THE MAN DIED :(\t\n\nThanks for playing our game (by - ABHIUDAY & AMARDEEP)\n");
    delay(2);
    exit(0);
  }
  printf("\n\t\t        -----------\t\nWrong Selections:-\n");
  //printf("\t");
  /*while(!isempty()) {
      char data = pop();
      printf("%c\n",data);
   }*/

  int p=top;
  while (top!=-1)
  {
    //printf("\t\t                   \t\t%c",stack[top]);
    printf("%c ",stack[top]);
    top--;
  }
  top = p;
  /*for(int i=0;i<j;i++)
  {
    printf("\t\t                   \t\t%c",stack[i]);
  }*/

  printf("\n\n");
  for(int i=0;rs[i]!='\0';i++)
  {
    printf("%c ",rs[i]);
  }
  if (count==rs_len){
    printf("\n\nBRAVO !! YOU GOT THE WORD RIGHT : THE MAN IS SAFE\n\nThanks for playing our game (by - ABHIUDAY & AMARDEEP)\n");
    delay(2);
    count=0;
    exit(0);
  }
  printf("\n\n");
}
void letter_choice(char *sel_word, int sw_len)
{
  int i,flag1=0,flag2=0,flag3=0,j;
  char l,right_sel[sw_len];
  for (i=0;i<sw_len;i++)
  {
    right_sel[i]='_';
  }
  right_sel[i]='\0';
  while(1)
  {
    flag3=0;
    flag2=0;
    flag1=0;
    scanf("%c",&l);
    for(i=0;i<sw_len;i++)
    {
      if (l==sel_word[i])
      {
        flag1 = 1;
        for(j=0;j<sw_len;j++)
        {
          if(right_sel[j]==l)
          {
            flag3=1;
            //break;
          }
          else
          {
            flag3=0;
          }
        }
        if(flag3==0)
        {
          right_sel[i]=l;
          count++;
          //flag1=1;
        }

        /*if (top!=-1)
          top--;*/
        //goto l1;
      }
    }
    if (flag1==0 && flag3==0)
    {
      if (top==-1)
      {
        push(l);
      }
      else
      {
        for(i=top;i>=0;i--)
        {
          if(stack[i]==l)
          {
            flag2=1;
            //printf("Letter already SELECTED : TRY AGAIN\n");
            //delay(1);
            //goto l1;
            break;
          }
        }
        if(flag2==0)
          push(l);
        /*else
        {
          printf("Letter already SELECTED : TRY AGAIN\n");
          delay(1);
        }*/
      }



      /*else if(flag1==0 && flag2==1)
      {
        printf("Letter already present in WRONG SELECTIONS");
        delay(1);
      }*/
    }
    /*if ((flag3==1 || flag2==1))
    {
      printf("Letter already SELECTED : TRY AGAIN\n");
      delay(1);
    }*/
    l1:redraw(right_sel,strlen(right_sel));
  }
}

int main()
{
  srand(time(0));
  int ran=rand()%ar_len;
  wrd_len=strlen(word[ran]);
  char sel_word[wrd_len];
  strcpy(sel_word,word[ran]);
  draw();
  letter_choice(sel_word,strlen(sel_word));
  //printf("%s\n%d",word[ran],wrd_len );
  return 0;
}
