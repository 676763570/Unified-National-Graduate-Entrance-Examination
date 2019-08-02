#include <stdio.h>
#include <string.h>
#define INF 1000000

int d[100][100];
int n,m;

int prim()
{
int dist[100],closet[100];
int min,u,ret,i,j;
for(i=1;i<=n;i++)
{
  closet[i]=0;
  dist[i]=d[1][i];
}
closet[1]=1;
ret=0;
for(i=2;i<=n;i++)
{
  min=INF;
  for(j=2;j<=n;j++)
  {
   if(!closet[j]&&dist[j]<min&&dist[j]>0)
   {
     u=j;
     min=dist[j];
   }
  }
  ret+=min;
  closet[u]=1;
  for(j=2;j<=n;j++)
  {
   if(!closet[j]&&d[u][j]<dist[j])
       dist[j]=d[u][j];
  }
}
return ret;
}

int main()
{
int i,j,sum,x,y,len;
while(scanf("%d",&n)!=EOF&&n)
{
m=(n*(n-1))/2;
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
    d[i][j]=INF;
  d[i][i]=0;
}
for(i=0;i<m;i++)
{
scanf("%d %d %d",&x,&y,&len);
d[x][y]=d[y][x]=len;
}
sum=prim();
printf("%d\n",sum);
}
return 0;
}