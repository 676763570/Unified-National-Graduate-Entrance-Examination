#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
}node,*clist;

void Create(clist l)
{
  int i;
  node *p,*s;
  p=l;
  for(i=2;i<=21;i++)
  {
	   s=(clist)malloc(sizeof(node));
	   p->next=s;
	   p=s;
	   p->data=i;
  }
	 p->next=l;
	 return;
}

node* output1(clist l)
{
	node *p=l;
	node *tmp;
	int i,j;
	while(p->next!=l) 
		p=p->next;
	for(i=0;i<20;i++)
	{
		for(j=0;j<16;j++)
		{
			l=l->next;
			p=p->next;
		}
		tmp=l;
		l=l->next;
		p->next=l;
		//printf("%d ",tmp->data);
		if(i!=19)
			free(tmp);
	}
	return p;
}


int main()
{
  node *p,*t;
  p=(clist)malloc(sizeof(node));
		p->data=1;
		p->next=NULL;
		Create(p);
		t=output1(p);
		printf("%d\n",t->data);
		free(t);
  return 0;
}