#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,temp,n;
int d[1000];
i=0;
printf("«Î ‰»Î ˝◊È:");
while(scanf("%d",&n)!=EOF)
{
  d[i++]=n;
}
n=i;
for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
    {
      if(d[i]>d[j])
      {
        temp=d[i];
        d[i]=d[j];
        d[j]=temp;
      }
    }
for(i=0;i<n;i++)
  printf("%d ",d[i]);
return 0;
}