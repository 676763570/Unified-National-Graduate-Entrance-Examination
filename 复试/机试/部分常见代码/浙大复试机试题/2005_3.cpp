#include <stdio.h>

int n,m;
int fa[1000];
int getfa(int t)
{
 if(fa[t]==t) return t;
 else
      return getfa(fa[t]);
}



int main()
{
int i,road,x,y;
while(scanf("%d",&n)&&n)
{
scanf("%d",&m);
for(i=1;i<=n;i++)
   fa[i]=i;
for(i=0;i<m;i++)
{
  scanf("%d %d",&x,&y);
  fa[getfa(x)]=getfa(y);
}
road=0;
for(i=2;i<=n;i++)
{
  if(getfa(1)!=getfa(i))
  {
    road++;
    fa[getfa(1)]=getfa(i);
  }
}
printf("%d\n",road);
}
return 0;
}