#include <stdio.h>
#include <string.h>
#define M 26
#define INF 100000

int n,m,d[M][M];

int main()
{
int i,j,k;
char a1,a2,a3;
while(scanf("%d %d",&n,&m)!=EOF&&(n||m))
{
  getchar();
  for(i=0;i<M;i++)
  {
    for(j=0;j<M;j++)
       d[i][j]=INF;
    d[i][i]=0;
  }
  for(i=0;i<n;i++)
  {
  scanf("%c%c%c",&a1,&a2,&a3);
  getchar();
  if(a2!='-')
     d[a1-'A'][a2-'A']=1;
  if(a3!='-')
     d[a1-'A'][a3-'A']=1;
  }
  for(k=0;k<M;k++)
     for(i=0;i<M;i++)
        for(j=0;j<M;j++)
           if(d[i][k]+d[k][j]<d[i][j])
              d[i][j]=d[i][k]+d[k][j];
  while(m--)
  {
  scanf("%c%c",&a1,&a2);
  getchar();
  k=d[a1-'A'][a2-'A'];
  if(k<INF)
   {
    if(k==1)
       printf("child\n");
    else
    {
      for(i=0;i<k-2;i++)
         printf("great-");
       printf("grandchild\n");
    }
   }
   else
   {
   k=d[a2-'A'][a1-'A'];
   if(k==INF)
      printf("-\n");
   else if(k==1)
      printf("parent\n");
   else
   {
     for(i=0;i<k-2;i++)
        printf("great-");
     printf("grandparent\n");
   }

   }
  }
}
return 0;
}