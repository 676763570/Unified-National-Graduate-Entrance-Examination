#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
char no[20];
int score[3];
float av;
struct node *next;
}stu,*user;

int main()
{
int c;
user s;
s=(user)malloc(sizeof(stu));
user p,q,temp;
p=s;
q=s;
c=0;
while(1)
{
printf("学号：");
scanf("%s",s->no);
if(strcmp(s->no,"0")==0)
    break;
printf("三门成绩：");
scanf("%d %d %d",&s->score[0],&s->score[1],&s->score[2]);
s->av=((float)(s->score[0]+s->score[1]+s->score[2])/3);
s->next=(user)malloc(sizeof(stu));
s=s->next;
c++;
}
int c1=0,c2=0,c3=0;
float ca;

while(p&&(strcmp(p->no,"0")!=0))
{
c1+=p->score[0];
c2+=p->score[1];
c3+=p->score[2];
p=p->next;
}
ca=(float)(c1+c2+c3)/((float)3*c);
temp=(user)malloc(sizeof(stu));
temp->next=NULL;
stu *r;
r=temp;
while(q&&(strcmp(q->no,"0")!=0))
{
  p=q->next;
  if(q->av>ca)
  {
     q->next=NULL;
     r->next=q;
     r=q;
  }
  q=p;
}
user B;
B=(user)malloc(sizeof(stu));
B->next=NULL;
user pre;
q=B;
while(temp->next!=NULL)
{
  pre=temp;
  p=pre->next;
  while(p->next!=NULL)
  {
     if(p->next->av>pre->next->av)
     {
        pre=p;
     }
        p=p->next;
   }
     printf("学号：%s\n",pre->next->no);
     printf("三门成绩：%d %d %d\n",pre->next->score[0],pre->next->score[1],pre->next->score[2]);
     printf("平均分：%f\n",pre->next->av);
     r=pre->next;
     q->next=r;
     pre->next=r->next;
     r->next=NULL;
     q=r;
}
return 0;
}