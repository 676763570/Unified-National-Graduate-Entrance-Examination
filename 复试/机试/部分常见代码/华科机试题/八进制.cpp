#include <stdio.h>
#include <string.h>

int d[100];

int main()
{
int i,k,n;
while(scanf("%d",&n)!=EOF)
{
  i=0;
  while(n)
  {
   d[i++]=n%8;
   n=n/8;
  }
  k=i;
  for(i=k-1;i>0;i--)
    printf("%d",d[i]);
  printf("%d\n",d[0]);
  memset(d,0,sizeof(d));
}
return 0;
}