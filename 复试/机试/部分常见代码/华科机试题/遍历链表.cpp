#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node,*linklist;

void Initlist(linklist *l)
{
 *l=(linklist)malloc(sizeof(node));
 (*l)->next=NULL;
}

void Create(linklist l,int n)
{
node *s,*pre,*p;
pre=l;
s=l->next;
while(s)
{
  if(n>s->data)
  {
     pre=s;
     s=s->next;
  }
  else
  break;
}
p=(linklist)malloc(sizeof(node));
p->data=n;
pre->next=p;
p->next=s;
}

void output(linklist l)
{
node *s;
s=l->next;
while(s->next)
{
   printf("%d ",s->data);
   s=s->next;
}
printf("%d\n",s->data);
return;
}

int main()
{
int temp,i,n;
while(scanf("%d",&n)!=EOF)
{
  linklist l;
  l=NULL;
  Initlist(&l);
  for(i=0;i<n;i++)
  {
     scanf("%d",&temp);
     Create(l,temp);
  }
  output(l);
}
return 0;
}