#include <stdio.h>
#define I long long //__int64

int main()
{
int n,i;
I a1,a2,b,sum;
while(scanf("%d",&n)!=EOF)
{
a1=1;
a2=2;
if(n==1)
  sum=1;
if(n==2)
  sum=2;
if(n>2)
{
  for(i=2;i<n;i++)
  {
    b=a1+a2;
    a1=a2;
    a2=b;
  }
  sum=b;
}
printf("%lld\n",sum);
}
return 0;
}