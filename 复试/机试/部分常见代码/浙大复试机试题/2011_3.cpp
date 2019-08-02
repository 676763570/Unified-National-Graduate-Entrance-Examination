#include <stdio.h>
#include <string.h>
#define N 1000005
int d1[N],d2[N],d[2000005];
int n,m;

int Find()
{
int i,j,k;
i=j=k=0;
while(i<n&&j<m)
{
  if(d1[i]<d2[j])
     {d[k++]=d1[i];i++;}
  else
     {d[k++]=d2[j];j++;}
}
while(i<n)
{
  d[k++]=d1[i];
  i++;
}
while(j<m)
{
  d[k++]=d2[j];
  j++;
}
if((n+m)%2==0) k=(n+m)/2-1;
else k=(n+m)/2;
return d[k];
}

int main()
{
int i,ans;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
     scanf("%d",&d1[i]);
  scanf("%d",&m);
  for(i=0;i<m;i++)
     scanf("%d",&d2[i]);
  ans=Find();
  printf("%d\n",ans);
}
return 0;
}