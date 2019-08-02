#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct  
{
int h,l,t;
}Node;

Node d[35];
int bh,n;
bool cmp(Node a,Node b)
{
return a.t<b.t;
}

void Dfs(int k,int time,int now)
{
if(k>=n)
{
  if(now>bh)   bh=now;
  return;
}
if(time+d[k].l<=d[k].t)
   Dfs(k+1,time+d[k].l,now+d[k].h);
Dfs(k+1,time,now);
}

int main()
{
int i;
while(scanf("%d",&n)!=EOF&&n>=0)
{
for(i=0;i<n;i++)
{
  scanf("%d %d %d",&d[i].h,&d[i].l,&d[i].t);
}
sort(d,d+n,cmp);
bh=0;
Dfs(0,0,0);
printf("%d\n",bh);
}
return 0;
}