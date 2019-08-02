#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct  
{
int ge,gi;
int a;
int no,rank;
int s[5];
}Node1;
typedef struct  
{
int num;
int nownum;
int nowrank;
int p[40005];
}Node2;

Node1 d[40005];
Node2 c[105];
int n,m,k;

bool cmp(Node1 a,Node1 b)
{
if(a.a!=b.a)
   return a.a>b.a;
else
   return a.ge>b.ge;
}

int main()
{
//freopen("E:\\C++\\input.txt","r",stdin);
//freopen("E:\\C++\\output.txt","w",stdout);
int i,j,t;
while(scanf("%d %d %d",&n,&m,&k)!=EOF)
{
for(i=0;i<m;i++)
{
  scanf("%d",&c[i].num);
  c[i].nownum=c[i].nowrank=0;
}
for(i=0;i<n;i++)
{
  scanf("%d %d",&d[i].ge,&d[i].gi);
  d[i].a=d[i].ge+d[i].gi;
  for(j=0;j<k;j++)
     scanf("%d",&d[i].s[j]);
  d[i].no=i;
  d[i].rank=0;
}
sort(d,d+n,cmp);
d[0].rank=1;
for(i=1;i<n;i++)
{
  if(d[i].a==d[i-1].a&&d[i].ge==d[i-1].ge) d[i].rank=d[i-1].rank;
  else d[i].rank=i+1;
}
for(i=0;i<n;i++)
{
   for(j=0;j<k;j++)
   {
     t=d[i].s[j];
     if(c[t].nownum<c[t].num||(c[t].nowrank==d[i].rank))
     {
       c[t].p[c[t].nownum]=d[i].no;
       c[t].nownum++;
       c[t].nowrank=d[i].rank;
       break;
     }
   }
}
for(i=0;i<m;i++)
{
if(c[i].nownum==0)
    printf("\n");
else
{
  sort(c[i].p,c[i].p+c[i].nownum);
  for(j=0;j<c[i].nownum-1;j++)
     printf("%d ",c[i].p[j]);
  printf("%d\n",c[i].p[c[i].nownum-1]);
}
}
}
//fclose(stdin);
//fclose(stdout);
return 0;
}