#include <stdio.h>
#include <string.h>
#define N 100000

int d[N],ans[N],p[N];


void prime()
{
int i,j,num;
num=0;
memset(d,0,sizeof(d));
for(i=2;i<N;i++)
{
 if(!d[i]) p[num++]=i;
 for(j=0;(j<num&&i*p[j]<=N);j++)
 {
   d[i*p[j]]=1;
   if(i%p[j]==0) break;
 }
}

return;
}

int main()
{
int n,cnt,pre,i;
prime();
pre=2;
cnt=0;
ans[0]=ans[1]=0;
for(i=2;i<N;i++)
{
  if(!d[i])
  {
    if(i-pre==2)  ans[i]=++cnt;
    else ans[i]=cnt;
    pre=i;
  }
  else
    ans[i]=cnt;
}
while(scanf("%d",&n)!=EOF&&n>=0)
{
printf("%d\n",ans[n]);
}
return 0;
}

