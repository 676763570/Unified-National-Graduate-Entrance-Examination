#include <stdio.h>

int m,n;
int d[105][105];

void Insert(int k)
{
int sum,f,i,temp;
sum=temp=d[k][0];
f=0;
for(i=1;i<n;i++)
{
  if(d[k][i]>temp)
  {
    f=i;
    temp=d[k][i];
  }
  sum+=d[k][i];
}
d[k][f]=sum;
return; 
}


int main()
{

int i,j;
while(scanf("%d %d",&m,&n)!=EOF)
{
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&d[i][j]);
  for(i=0;i<m;i++)
    Insert(i);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n-1;j++)
    {
      printf("%d ",d[i][j]);  
    }
    printf("%d\n",d[i][n-1]);
  }
}
return 0;
}