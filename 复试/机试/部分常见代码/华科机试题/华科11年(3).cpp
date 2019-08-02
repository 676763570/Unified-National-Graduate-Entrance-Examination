#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
char *s;
struct node *lchild,*rchild;
}binode,*bitree;

void Insert(bitree *t,char *data)
{
   if(!(*t))
   {
      (*t)=(bitree)malloc(sizeof(binode));
      (*t)->s=data;
      (*t)->lchild=NULL;
      (*t)->rchild=NULL;
   }
   else
   {
     if(strcmp((*t)->s,data)>0)
        Insert(&((*t)->lchild),data);
     else
        Insert(&((*t)->rchild),data);
   }
   return;
}

void preOrder(bitree t)
{
  if(t)
  {
     printf("%s\n",t->s);
     preOrder(t->lchild);
     preOrder(t->rchild);
  }
  return;
}

int main()
{
bitree t=NULL;
char str[100][100];
int i,n;
printf("please input n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
  printf("%s\n",str[i]);
  Insert(&t,str[i]);
}
printf("preOrder output:\n");
preOrder(t);
return 0;
}
