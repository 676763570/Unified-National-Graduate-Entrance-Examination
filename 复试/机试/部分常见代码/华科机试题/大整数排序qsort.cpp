#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct num 
{
char s[1005];
int len;
}num;

int cmp(const void *a,const void *b)
{
  struct num *c=(num *)a;
  struct num *d=(num *)b;
  if(c->len!=d->len)  return c->len-d->len;
  else   return strcmp(c->s,d->s);
}

int main()
{
num d[1000];
int n,i;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
  {
    scanf("%s",d[i].s);
    d[i].len=strlen(d[i].s);
  }
  qsort(d,n,sizeof(num),cmp);
  for(i=0;i<n;i++)
   printf("%s\n",d[i].s);
}
return 0;
}