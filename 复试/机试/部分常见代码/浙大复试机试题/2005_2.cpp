#include <stdio.h>

int n,low,high,d[10000];

int Find()
{
int i,s,ret,sum;
sum=0;
s=low=high=0;
/*for(ret=d[i=0];i<n;i++,s=(sum>0 ? s:i))
{

if((sum=(sum>0 ? sum:0)+d[i])>ret)
{
  ret=sum;low=s;high=i;
}
}*/
for(ret=d[i=0];i<n;i++)
{
if(sum<=0)
{
sum=0;
s=i;
}
if((sum+=d[i])>ret)
{
ret=sum;low=s;high=i;
}
}
return ret;
}

bool Isn()
{
int i;
for(i=0;i<n;i++)
   if(d[i]>=0) return false;
return true;
}


int main()
{
int i,r;
while(scanf("%d",&n)&&n)
{
for(i=0;i<n;i++)
   scanf("%d",&d[i]);
if(Isn())
    printf("0 %d %d\n",d[0],d[n-1]);
else
{
r=Find();
printf("%d %d %d\n",r,d[low],d[high]);
}
}
return 0;
}