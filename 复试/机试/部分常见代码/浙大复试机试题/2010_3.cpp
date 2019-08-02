#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct  
{
int g,m,p;
int flag,no;
}Node;

Node d[10000];
int num[10000];
int pm[10000];
int pmf[10000];
int ans[10000];
int n,m,c;

bool cmp(Node a,Node b)
{
if(a.flag!=b.flag)
    return a.flag>b.flag;
if(c==1) return a.g>b.g;
if(c==2) return a.m>b.m;
if(c==3) return a.g*b.p>b.g*a.p;
else     return a.m*b.p>b.m*a.p;
}

int main()
{
int i;
while(scanf("%d %d",&n,&m)!=EOF&&(n&&m))
{
  for(i=0;i<n;i++)
  {
    scanf("%d %d %d",&d[i].g,&d[i].m,&d[i].p);
    d[i].no=i;
    d[i].flag=0;
  }
  for(i=0;i<m;i++)
  {
  scanf("%d",&ans[i]);
  d[ans[i]].flag=1;
  }
  memset(pm,-1,sizeof(pm));
  memset(pmf,0,sizeof(pmf));
  for(c=1;c<=4;c++)
  {
  sort(d,d+n,cmp);
  num[0]=1;
  for(i=1;i<m;i++)
  {
    if(c==1&&d[i].g==d[i-1].g) num[i]=num[i-1];
    else if(c==2&&d[i].m==d[i-1].m) num[i]=num[i-1];
    else if(c==3&&d[i].g*d[i-1].p==d[i-1].g*d[i].p)  num[i]=num[i-1];
    else if(c==4&&d[i].m*d[i-1].p==d[i-1].m*d[i].p)  num[i]=num[i-1];
    else num[i]=i+1;
  }
  for(i=0;i<m;i++)
  {
   if(pm[d[i].no]>num[i]||pm[d[i].no]==-1)
     {
      pm[d[i].no]=num[i];
      pmf[d[i].no]=c;
     }
  }
  }
  for(i=0;i<m;i++)
    printf("%d:%d\n",pm[ans[i]],pmf[ans[i]]);
  printf("\n");
}
return 0;
}