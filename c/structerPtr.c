#include<stdio.h>
struct item
{
  char *itemName;
  int quantity;
  float price;
};
void readItem(struct item *p)
{
  char temp[100];
  printf("enter the product name\n");
  gets(temp);
  p->itemName=(char*)malloc(strlen(temp)+1);
  strcpy(p->itemName,temp);
  printf("enter the price & quantity of the product\n");
  scanf("%f\n%d",&(p->price),&(p->quantity));
}
void print(struct item *ptr)
{
  printf("the product name is : %s\n",ptr->itemName);
  printf("the product quantity is : %d\n",ptr->quantity);
  printf("the product price is : %.2f\n",ptr->price);
  printf("the total amount is : %.2f\n",((ptr->quantity)*(ptr->price)));
}
void main()
{
  struct item x,*xp=NULL;
  xp=&x;
  readItem(xp);
  print(xp);
}
