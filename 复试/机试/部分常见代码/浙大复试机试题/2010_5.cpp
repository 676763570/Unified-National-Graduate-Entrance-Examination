#include <stdio.h>
#include <string.h>
#define N 2050

int n;
char s1[N],s2[N];
void insert(char *s,char c,int t)
{
if(s[t]==' ') s[t]=c;
else if(s[t]>c)  insert(s,c,2*t);
else insert(s,c,2*t+1);
return;
}

int main()
{
int i;
char s[30];
while(scanf("%d",&n)!=EOF&&n)
{
getchar();
gets(s);
int len;
len=strlen(s);
memset(s1,' ',sizeof(s1));
for(i=0;i<len;i++)
   insert(s1,s[i],1);
while(n--)
{
  gets(s);
  memset(s2,' ',sizeof(s2));
  for(i=0;s[i];i++)
     insert(s2,s[i],1);
  if(strcmp(s1,s2))
      printf("NO\n");
  else
      printf("YES\n");
}
}
return 0;
}