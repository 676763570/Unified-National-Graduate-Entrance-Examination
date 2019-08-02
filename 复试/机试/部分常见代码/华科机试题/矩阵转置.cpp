#include <stdio.h>
#include <string.h>

int main()
{
int d[100][100],i,j,temp,n;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&d[i][j]);
  for(i=0;i<n;i++)
    for(j=i;j<n;j++)
    {
      temp=d[i][j];
      d[i][j]=d[j][i];
      d[j][i]=temp;
    }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
      printf("%d ",d[i][j]);
    printf("%d\n",d[i][n-1]);
  }
}
return 0;
}