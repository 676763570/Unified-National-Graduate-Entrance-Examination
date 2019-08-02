#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int n,i,j,d[5][5];
int max[5][5],max1,max2,f1,f2;
while(scanf("%d",&n)!=EOF)
{
while(n--)
{
  max1=max2=0;
  f1=f2=0;
  for(i=0;i<4;i++)
    for(j=0;j<5;j++)
       scanf("%d",&d[i][j]);
  for(j=0;j<5;j++)
  {
    if(d[0][j]>d[1][j])
      max1=d[0][j],max2=d[1][j],f1=0,f2=1;
    else
      max1=d[1][j],max2=d[0][j],f1=1,f2=0;
    for(i=2;i<4;i++)
    {
       if(d[i][j]>max1)
          max2=max1,max1=d[i][j],f2=f1,f1=i;
       else if(d[i][j]>max2)
          max2=d[i][j],f2=i;
    }
    if(f1<f2)
      max[0][j]=max1,max[1][j]=max2;
    else
      max[0][j]=max2,max[1][j]=max1;
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<5;j++)
       printf("%d ",max[i][j]);
    printf("\n");
  }
  memset(d,0,sizeof(d));
  memset(max,0,sizeof(max));
  }
}
return 0;
}