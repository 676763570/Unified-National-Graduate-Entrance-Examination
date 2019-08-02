#include <stdio.h>
#include <algorithm>
using namespace std;
#define I __int64
#define N 1000005

typedef struct  
{
I val;
}M;
M c[N],p[N];

int nc,np;

bool cmp(M a,M b)
{
  return a.val>b.val;
}

int main()
{ 
int i,j;
I sum;
while(scanf("%d",&nc)!=EOF&&nc>=0)
{
   sum=0;
   for(i=0;i<nc;i++)
     scanf("%I64d",&c[i].val);
   scanf("%d",&np);
   for(i=0;i<np;i++)
     scanf("%I64d",&p[i].val);
   sort(c,c+nc,cmp);
   sort(p,p+np,cmp);
   for(i=0,j=0;i<nc&&j<np;i++,j++)
     {
     if(!(c[i].val>0&&p[j].val>0)) break;
     sum+=c[i].val*p[j].val;
      } 
   for(i=nc-1,j=np-1;i>=0&&j>=0;i--,j--)
   {
     if(!(c[i].val<0&&p[j].val<0)) break;
     sum+=c[i].val*p[j].val;
     }
  printf("%I64d\n",sum);
}
return 0;
}