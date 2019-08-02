#include <stdio.h>
#include <string.h>
#include <ctype.h>

int a,b;

int main()
{
char s1[15],s2[15];
int i;
while(scanf("%s %s",s1,s2)!=EOF)
{
  int len;
  len=strlen(s1);
  a=b=0;
  for(i=0;i<len;i++)
  {
    if(isdigit(s1[i]))
       a=a*10+s1[i]-48;
  }
  len=strlen(s2);
  for(i=0;i<len;i++)
  {
    if(isdigit(s2[i]))
       b=b*10+s2[i]-48;
  }
  if(s1[0]=='-')
     a=-a;
  if(s2[0]=='-')
     b=-b;
  printf("%d\n",a+b);
}
return 0;
}