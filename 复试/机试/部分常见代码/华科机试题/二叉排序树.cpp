#include <stdio.h>
#include <stdlib.h>

typedef struct  node
{
int data;
struct node *lchild,*rchild;
}binode,*bitree;

void Insert(bitree *t,int data)
{
   if(!(*t))
   {
      (*t)=(bitree)malloc(sizeof(binode));
      (*t)->data=data;
      (*t)->lchild=NULL;
      (*t)->rchild=NULL;
   }
   else
   {
      if((*t)->data>data)
         Insert(&((*t)->lchild),data);
      if((*t)->data<data)
         Insert(&((*t)->rchild),data);
   }
   return;
}

void Preorder(bitree t)
{
  if(t)
  {
  printf("%d ",t->data);
  Preorder(t->lchild);
  Preorder(t->rchild);
  }
  return;
}

void Inorder(bitree t)
{
  if(t)
  {
  Inorder(t->lchild);
  printf("%d ",t->data);
  Inorder(t->rchild);
  }
  return;
}

void Postorder(bitree t)
{
  if(t)
  {
  Postorder(t->lchild);
  Postorder(t->rchild);
  printf("%d ",t->data);
  }
  return;
}

void Delete(bitree t)
{
  if(t)
  {
   Delete(t->lchild);
   Delete(t->rchild);
   free(t);
  }
  return;
}

int main()
{ 
  int n,i,d[105];
  while(scanf("%d",&n)!=EOF)
  {
    bitree t;
    t=NULL;
    for(i=0;i<n;i++)
    {
       scanf("%d",&d[i]);
       Insert(&t,d[i]);
    }
    Preorder(t);
    printf("\n");
    Inorder(t);
    printf("\n");
    Postorder(t);
    printf("\n");
    Delete(t);
  }
  return 0;
}