#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
char ch;
struct node *rchild,*lchild;
}binode,*bitree;

char s[100];
int i;
void CreateBiTree(bitree *t)
{
char ch;
ch=s[i++];
if(ch=='#') *t=NULL;
else
  {
    *t=(bitree)malloc(sizeof(binode));
    (*t)->ch=ch;
    CreateBiTree(&((*t)->lchild));
    CreateBiTree(&((*t)->rchild));
  }
}

void Inorder(bitree t)
{
 if(t)
 {
    Inorder(t->lchild);
    printf("%c ",t->ch);
    Inorder(t->rchild);
 }
}

void Delete(bitree t)
{
if(t)
{
  Delete(t->lchild);
  Delete(t->rchild);
  free(t);
}
}

int main()
{
while(scanf("%s",s)!=EOF)
{
bitree t;
t=NULL;
i=0;
CreateBiTree(&t);
Inorder(t);
printf("\n");
Delete(t);
memset(s,' ',sizeof(s));
}
return 0;
}