#include <stdio.h>
//#include <algorithm>
//using namespace std;

int n;
int d[10000],q[100000],p[10000],s[10000];

void sort()
{
int i,j,change,t;
change=1;
for(i=0;i<n&&change;i++)
{
  change=0;
  for(j=0;j<n-i-1;j++)
    if(q[j]>q[j+1])
    {
      t=q[j];
      q[j]=q[j+1];
      q[j+1]=t;
      change=1;
    }
}
return;
}

int main()
{
int i,j,t;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
  {
  scanf("%d",&d[i]);
  q[i]=d[i];
  }
  sort();
  t=q[0];
  p[0]=1;
  for(i=1;i<n;i++)
    if(q[i]==q[i-1]) p[i]=p[i-1];
    else p[i]=p[i-1]+1;
 for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
      if(d[i]==q[j])  {s[i]=p[j];break;}
 }
 for(i=0;i<n-1;i++)
    printf("%d ",s[i]);
 printf("%d\n",s[n-1]);
}
return 0;
}