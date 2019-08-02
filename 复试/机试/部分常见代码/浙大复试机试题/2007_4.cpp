#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct  
{
char no[7];
char name[9];
int score;
}Node;

Node d[100001];
int n,c;

bool cmp1(Node a,Node b)
{
return strcmp(a.no,b.no)<0;
}

bool cmp2(Node a,Node b)
{
if(strcmp(a.name,b.name)!=0)
   return strcmp(a.name,b.name)<0;
else return strcmp(a.no,b.no)<0;
}

bool cmp3(Node a,Node b)
{
if(a.score!=b.score)
    return a.score<b.score;
else return strcmp(a.no,b.no)<0;
}

int main()
{
int k,i;
k=0;
while(scanf("%d %d",&n,&c)&&n)
{
k++;
for(i=0;i<n;i++)
{
  scanf("%s %s %d",d[i].no,d[i].name,&d[i].score);
}
if(c==1)
   sort(d,d+n,cmp1);
else if(c==2)
   sort(d,d+n,cmp2);
else 
   sort(d,d+n,cmp3);
printf("Case %d:\n",k);
for(i=0;i<n;i++)
   printf("%s %s %d\n",d[i].no,d[i].name,d[i].score);
}
return 0;
}
