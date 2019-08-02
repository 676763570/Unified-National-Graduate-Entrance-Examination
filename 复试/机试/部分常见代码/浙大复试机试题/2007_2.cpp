#include <stdio.h>
#include <string.h>

char c[6],s[81];
int d[6];

int main()
{
int i,j;
while(gets(c)&&strcmp(c,"#"))
{
gets(s);
memset(d,0,sizeof(d));
for(i=0;c[i]!='\0';i++)
{
  for(j=0;s[j];j++)
    if(c[i]==s[j]) d[i]++;
}
for(i=0;c[i];i++)
  printf("%c %d\n",c[i],d[i]);
}
return 0;
}