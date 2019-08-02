#include <stdio.h>
#define I long long
I sum(int n)
{
if(n==1)
  return 1;
else if(n==2)
  return 2;
else  return n*sum(n-1);
}


int main()
{
int i,n;
I y1,y2;
while(scanf("%d",&n)!=EOF)
{
y1=y2=0;
for(i=1;i<=n;i++)
{
  if(i%2==1)
    y1+=sum(i);
  else
    y2+=sum(i);
}
printf("%lld %lld\n",y1,y2);
}
return 0;
}