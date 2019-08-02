#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct  
{
char p[21];
int score;
}Node;

Node d[1001];
int n,m,k;
int s[11];

bool cmp(Node a,Node b)
{
if(a.score!=b.score)
    return a.score>b.score;
else
    return strcmp(a.p,b.p)<0;
}

int main()
{
int i,t,a,c;
while(scanf("%d",&n)&&n)
{
scanf("%d %d",&m,&k);
for(i=1;i<=m;i++)
   scanf("%d",&s[i]);
for(i=0;i<n;i++)
{
scanf("%s",d[i].p);
d[i].score=0;
scanf("%d",&t);
while(t--)
{
  scanf("%d",&a);
  d[i].score+=s[a];
}
}
sort(d,d+n,cmp);
for(i=0;i<n;i++)
{
 if(d[i].score<k)
     break;    
}
c=i;
printf("%d\n",c);
for(i=0;i<c;i++)
{
  printf("%s %d\n",d[i].p,d[i].score);
}

}
return 0;
}