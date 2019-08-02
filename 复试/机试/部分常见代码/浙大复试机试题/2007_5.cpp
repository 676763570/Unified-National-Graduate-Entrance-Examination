#include <stdio.h>
#include <queue>
using namespace std;
typedef struct  
{
int v1,v2,len;
}Node;

Node d[102];
int fa[102];
int n,m;

bool operator > (Node a,Node b)
{
if(a.len>b.len) return true;
else return false;
}

int getfa(int t)
{
if(fa[t]==t)  return t;
else return getfa(fa[t]);
}

int main()
{
int i,sum;
priority_queue< Node,vector<Node>,greater<Node> > Q;
Node e;
while(scanf("%d %d",&n,&m)!=EOF&&n)
{
for(i=1;i<=m;i++)
  fa[i]=i;
while(!Q.empty())  Q.pop();
for(i=0;i<n;i++)
{
  scanf("%d %d %d",&e.v1,&e.v2,&e.len);
  Q.push(e);
}
sum=0;
while(!Q.empty())
{
  Node e;
  e=Q.top();
  Q.pop();
  if(getfa(e.v1)!=getfa(e.v2))
  {
    fa[getfa(e.v1)]=getfa(e.v2);
    sum=sum+e.len;
  }
}
int f=0;

for(i=2;i<=m;i++)
  if(getfa(1)!=getfa(i)) f=1;
if(f)
  printf("?\n");
else
  printf("%d\n",sum);
}
return 0;
}