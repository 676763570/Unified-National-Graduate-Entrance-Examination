#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
return *(int *)a - *(int *)b;
}

int main()
{
int n,i,max,d[1005];
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
    scanf("%d",&d[i]);
  qsort(d,n,sizeof(d[0]),cmp);
  max=d[n-1];
  printf("%d\n",max);
  if(n==1)
  {
    printf("-1\n");
  }
  else if(n>1)
  {
    for(i=0;i<n-2;i++)
        printf("%d ",d[i]);
    printf("%d\n",d[n-2]);
  }
}
return 0;
}