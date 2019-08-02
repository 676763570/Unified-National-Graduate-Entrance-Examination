#include <stdio.h>
#include <string.h>
#define INF 0x3f3f3f3f
#define N 1010

int n,m;
int len[N][N],val[N][N];
int dis[N],cost[N];

void Dji(int q)
{
int s[N];
int i,j;
for(i=1;i<=n;i++)
{
  dis[i]=len[q][i];
  cost[i]=val[q][i];
  s[i]=0;
}
s[q]=1;
for(i=1;i<=n;i++)
{
 int tp=INF,cp=INF,u;
 for(j=1;j<=n;j++)
   if(!s[j]&&(dis[j]<tp||(dis[j]==tp&&cost[j]<cp)))
   {
     u=j;
     tp=dis[j];
     cp=cost[j];
   }
 s[u]=1;
 for(j=1;j<=n;j++)
   if(!s[j]&&len[u][j]!=INF)
   {
   tp=dis[u]+len[u][j];
   cp=cost[u]+val[u][j];
   if(tp<dis[j]||(tp==dis[j]&&cp<cost[j]))
       dis[j]=tp,cost[j]=cp;
   }
}
return;
}

int main()
{
int i,j,a,b,d,p,s,t;
while(scanf("%d %d",&n,&m)!=EOF&&(n||m))
{
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
        len[i][j]=val[i][j]=INF;
     len[i][i]=val[i][i]=0;
  }
  for(i=0;i<m;i++)
  {
  scanf("%d %d %d %d",&a,&b,&d,&p);
  if(len[a][b]>d)
  {
    len[a][b]=len[b][a]=d;
    val[a][b]=val[b][a]=p;
  }
  }
  scanf("%d %d",&s,&t);
  Dji(s);
  printf("%d %d\n",dis[t],cost[t]);
}
return 0;
}