#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
  return *(int *)a - *(int *)b;
}

int main()
{
int i,n,d[105];
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
    scanf("%d",&d[i]);
  qsort(d,n,sizeof(d[0]),cmp);
  for(i=0;i<n;i++)
    printf("%d ",d[i]);
  printf("\n");
}
return 0;
}