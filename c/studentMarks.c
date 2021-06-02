#include<stdio.h>
struct student
{
  char name[50],usn[50];
  int m;
};
int main()
{
  int i,n,ca=0,cb=0;
  float sum=0,avg;
  printf("enter no. of students\n");
  scanf("%d",&n);
  struct student s[n];
  printf("enter student details\n");
  for(i=0;i<n;i++)
  {
    printf("enter name,usn and marks of student no.%d\n",i+1);
    scanf("%s %s %d",s[i].name,s[i].usn,&s[i].m);
  }
  for(i=0;i<n;i++)
    sum+=s[i].m;
  avg=sum/n;
  printf("Average = %.2f\n",avg);
  for(i=0;i<n;i++)
    (s[i].m>avg)?ca++:cb++;
  printf("no of students > average = %d\n",ca);
  printf("no of students < average = %d\n",cb);
}
