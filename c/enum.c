#include<stdio.h>
void main()
{
enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
enum company a,b,c;
a=XEROX,b=GOOGLE,c=EBAY;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
return;
}
