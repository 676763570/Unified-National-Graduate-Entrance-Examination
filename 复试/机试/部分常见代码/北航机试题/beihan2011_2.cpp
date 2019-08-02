#include <stdio.h>

int n,m,n1,m1;
int a[22][22],b[22][22];

int main()
{
int i,j,k1,k2;
//int t[22][22];
while(scanf("%d %d",&n,&m)!=EOF)
{
for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
     scanf("%d",&a[i][j]);
scanf("%d %d",&n1,&m1);
for(i=1;i<=n1;i++)
   for(j=1;j<=m1;j++)
      scanf("%d",&b[i][j]);
scanf("%d %d",&k1,&k2);
if(k1+n1-1<=n&&k2+m1-1<=m)
{
  for(i=k1;i<k1+n1;i++)
     for(j=k2;j<k2+m1;j++)
        a[i][j]=b[i-k1+1][j-k2+1];
}
else if(k1<=n&&k2<=m)
{
  for(i=k1;i<=n;i++)
     for(j=k2;j<=m;j++)
        a[i][j]=b[i-k1+1][j-k2+1];
}
for(i=1;i<=n;i++)
{
   for(j=1;j<m;j++)
      printf("%d ",a[i][j]);
   printf("%d\n",a[i][m]);
}
}
return 0;
}