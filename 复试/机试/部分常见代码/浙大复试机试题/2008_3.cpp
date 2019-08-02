#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
typedef struct  
{
int v1,v2,spend;
}Node;
Node d[100];
int fa[100],n;

bool operator > (Node a,Node b)
{
if(a.spend>b.spend)  return true;
else return false;
}

int getfa(int t)
{
if(fa[t]==t) return t;
else return getfa(fa[t]);
}

int main()
{
int i,sum,v1,v2,spend,f;
Node e;
priority_queue< Node,vector<Node>,greater<Node> > Q;
while(scanf("%d",&n)!=EOF&&n)
{
for(i=1;i<=n;i++)
   fa[i]=i;
int m=(n*(n-1))/2;
while(!Q.empty())  Q.pop();
for(i=0;i<m;i++)
{
  scanf("%d %d %d %d",&v1,&v2,&spend,&f);
  if(f==1)
    fa[getfa(v1)]=getfa(v2);
  else
  {
    e.v1=v1;
    e.v2=v2;
    e.spend=spend;
    Q.push(e);
  }
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
   sum+=e.spend;
   }
}
printf("%d\n",sum);
}
return 0;
}