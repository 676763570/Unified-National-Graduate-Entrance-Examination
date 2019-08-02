#include <stdio.h>
#include <string.h>

int d[200000];
int num[505],n;

void Find(int a)
{
 while(a!=1)
 {
  if(a%2==0)
  {
    a=a/2;
    d[a]=0;
  }
  else
  {
   a=(a*3+1)/2;
   d[a]=0;
  }
 }
 return;
}

int main()
{
int ans[505],i,temp,k;
while(scanf("%d",&n)!=EOF&&n)
{
  memset(d,0,sizeof(d));
  for(i=0;i<n;i++)
  {
     scanf("%d",&temp);
     d[temp]=1;
     num[i]=temp;
  }
  for(i=0;i<n;i++)
     Find(num[i]);
   k=0;
  for(i=n-1;i>=0;i--)
    if(d[num[i]]==1) ans[k++]=num[i];
  for(i=0;i<k-1;i++)
     printf("%d ",ans[i]);
  printf("%d\n",ans[k-1]);
    
}
return 0;
}
