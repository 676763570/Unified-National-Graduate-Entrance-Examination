#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct  
{
char str[1005];
int len;
}num;

bool cmp(num a,num b)
{
  if(a.len!=b.len)
      return a.len<b.len;
  else
      return strcmp(a.str,b.str)<0;
}


int main()
{
num d[105];
int n,i;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
  {
    scanf("%s",d[i].str);
    d[i].len=strlen(d[i].str);
  }
  sort(d,d+n,cmp);
  for(i=0;i<n;i++)
    printf("%s\n",d[i].str);
}
return 0;
}