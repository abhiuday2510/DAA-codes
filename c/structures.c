#include <stdio.h>
struct employee
{
  char name[100];
  char hireDate[10];
  float salary;
};
void main()
{
  struct employee emp2,emp1={"mimansa","23/04/2014",100000};
  printf("name=%s\n",emp1.name);
  printf("date=%s\n",emp1.hireDate);
  printf("salary=%.2f\n",emp1.salary);
  printf("enter the name,date of hiring & salary of an employee\n");
  gets(emp2.name);
  scanf("%s\n%f",emp2.hireDate,&emp2.salary);
  printf("name=%s\n",emp2.name);
  printf("date=%s\n",emp2.hireDate);
  printf("salary=%.2f",emp2.salary);
}
