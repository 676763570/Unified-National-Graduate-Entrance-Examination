#include <stdio.h>
#include <string.h>

int fa[1000];
int d[1000];
int n,m;

int getfa(int t)
{
if(fa[t]==t)  return t;
else return getfa(fa[t]);
}

bool Find()
{
int i;
for(i=1;i<=n;i++)
   if(d[i]%2!=0)  return false;
return true;
}

int main()
{
int i,v1,v2;
while(scanf("%d",&n)!=EOF&&n)
{
scanf("%d",&m);
for(i=1;i<=n;i++)
   fa[i]=i;
memset(d,0,sizeof(d));
for(i=0;i<m;i++)
{
   scanf("%d %d",&v1,&v2);
   fa[getfa(v1)]=getfa(v2);
   d[v1]++;
   d[v2]++;
}
int f=0;
for(i=2;i<=n;i++)
   if(getfa(i)!=getfa(1))  {f=1; break;}
if(!f&&Find())
    printf("1\n");
else
    printf("0\n");
}
return 0;
}