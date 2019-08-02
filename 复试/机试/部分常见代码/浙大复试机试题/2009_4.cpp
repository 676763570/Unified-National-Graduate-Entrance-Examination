#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;

int n,m,d[100005];

int main()
{
int i;
while(scanf("%d %d",&n,&m)!=EOF&&(n&&m))
{
for(i=0;i<n;i++)
   scanf("%d",&d[i]);
sort(d,d+n,greater<int>());
if(m<n)
  {
  for(i=0;i<m-1;i++)
     printf("%d ",d[i]);
  printf("%d\n",d[m-1]);
  }
else
  {
  for(i=0;i<n-1;i++)
     printf("%d ",d[i]);
  printf("%d\n",d[n-1]);
  }
}
return 0;
}