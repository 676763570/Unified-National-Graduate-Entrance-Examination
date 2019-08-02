#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct  
{
char p[18];
char start[10],end[10];
}Node;

Node d[1000];
int n,m;

bool cmp1(Node a,Node b)
{
return strcmp(a.start,b.start)<0;
}

bool cmp2(Node a,Node b)

{
return strcmp(a.end,b.end)>0;
}

int main()
{
int i,j;
while(scanf("%d",&n)!=EOF)
{
for(i=0;i<n;i++)
{
scanf("%d",&m);
for(j=0;j<m;j++)
{
  scanf("%s %s %s",d[j].p,d[j].start,d[j].end);
}
sort(d,d+m,cmp1);
printf("%s ",d[0].p);
sort(d,d+m,cmp2);
printf("%s\n",d[0].p);
}
}
return 0;
}