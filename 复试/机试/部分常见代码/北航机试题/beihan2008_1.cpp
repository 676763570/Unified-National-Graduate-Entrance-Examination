#include <stdio.h>
#include <string.h>
#define N 10005

int d[N],p[N],ans[N];
int n;

void prime()
{
int i,num,j;
num=0;
memset(d,0,sizeof(d));
for(i=2;i<N;i++)
{
  if(!d[i])  p[num++]=i;
  for(j=0;(j<num&&i*p[j]<N);j++)
  {
    d[i*p[j]]=1;
    if(i%p[j]==0)  break;
  }
}
return;
}

int main()
{
int i,j;
prime();
while(scanf("%d",&n)!=EOF)
{
  j=0;
  for(i=2;i<n;i++)
    if((!d[i])&&i%10==1) ans[j++]=i;
  if(j==0)
     printf("-1\n");
  else
  {
     for(i=0;i<j-1;i++)
        printf("%d ",ans[i]);
     printf("%d\n",ans[j-1]);
  }
}
return 0;
}