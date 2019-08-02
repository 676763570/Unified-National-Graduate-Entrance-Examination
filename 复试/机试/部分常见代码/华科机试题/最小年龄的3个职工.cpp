#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  node
{
int num;
char name[10];
int age;
}node;

int cmp(const void *a,const void *b)
{
struct node *c=(node *)a;
struct node *d=(node *)b;
if(c->age!=d->age)  return c->age-d->age;
else return c->num-d->num;
}

int main()
{
int n,i;
node s[105];
while(scanf("%d",&n)!=EOF)
{
   for(i=0;i<n;i++)
      scanf("%d %s %d",&s[i].num,s[i].name,&s[i].age);
   qsort(s,n,sizeof(node),cmp);
   if(n>=3) n=3;
   for(i=0;i<n;i++)
      printf("%d %s %d\n",s[i].num,s[i].name,s[i].age);
}
return 0;
}