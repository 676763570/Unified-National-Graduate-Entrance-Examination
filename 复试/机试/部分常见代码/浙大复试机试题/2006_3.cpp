#include <stdio.h>
#include <queue>
using namespace std;

typedef struct  
{
int v1,v2,len;
}Node;

int fa[100];
int n;
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
priority_queue< Node,vector<Node>,greater<Node> > Q;
int i,sum;
Node e;
while(scanf("%d",&n)!=EOF&&n)
{
for(i=1;i<=n;i++)
  fa[i]=i;
int m=(n*(n-1))/2;

while(!Q.empty()) Q.pop();
for(i=0;i<m;i++)
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
       sum+=e.len;
       fa[getfa(e.v1)]=getfa(e.v2);
     }
}
printf("%d\n",sum); 
}
return 0;
}