#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int data;
	struct node *next;
}node,*clist;

int n,m;

void Create(clist l)
{
	int i;
	node *s,*p;
//	l=(clist)malloc(sizeof(node));
//	l->data=1;
	p=l;
	for(i=2;i<=n;i++)
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
	while(p->next!=l) //get pre
		p=p->next;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
			l=l->next;
			p=p->next;
		}
		tmp=l;
		l=l->next;
		p->next=l;
		printf("%d ",tmp->data);
		if(i!=n-2)
			free(tmp);
	}
	return p;
}

int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		node *p,*t;
   p=(clist)malloc(sizeof(node));
		p->data=1;
		p->next=NULL;
		Create(p);
		t=output1(p);
		printf("%d\n",t->data);
		free(t);
	}
	return 0;
}