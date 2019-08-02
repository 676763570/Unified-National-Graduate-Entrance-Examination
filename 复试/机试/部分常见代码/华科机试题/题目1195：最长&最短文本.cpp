#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node 
{
char s[1005];
int d;
}node;


int cmp(const void *a,const void *b)
{
  struct node *c=(node *)a;
  struct node *d=(node *)b;
  return c->d-d->d;
  //else   return strcmp(c->s,d->s);
}


int main()
{
  node p[10000];
  char str[1000];
  int i,n,k;
  i=0;
  while(scanf("%s",str)!=EOF)
  {
     strcpy(p[i].s,str);
     p[i].d=strlen(str);
     i++;
  }
  n=i;
  qsort(p,n,sizeof(p[0]),cmp);
 // i=0;
  k=p[0].d;
  printf("%s\n",p[0].s);
  for(i=1;i<n;i++)
    if(p[i].d==k)
       printf("%s\n",p[i].s);
    else
       break;
 // i=n-1;
  k=p[n-1].d;
  printf("%s\n",p[n-1].s);
  for(i=n-2;i>=0;i--)
    if(p[i].d==k)
       printf("%s\n",p[i].s);
    else
       break;
  return 0;
}