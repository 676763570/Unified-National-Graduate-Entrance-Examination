#include <stdio.h>
#include <string.h>

int n,m;
int d[100],p[100];

int Find(int k)
{
int i,r;
r=0;
for(i=1;i<k;i++)
{
   if(k%i==0) r=r+i;
}
return r;
}

int main()
{
int i,j,r,s;
int d1[20005];
while(scanf("%d %d",&n,&m)!=EOF)
{
  j=0;
  memset(d1,0,sizeof(d1));
  for(i=n;i<=m;i++)
  {
   if(d1[i]==0)
   {
   r=Find(i);
   if(r>=n&&r<=m) 
     {
       s=Find(r);
       if(s>=n&&s<=m&&s==i&&i!=r)
       {
        d[j]=i;
        p[j]=r;
        j++;
        d1[r]=1;
       }
     }
    }
  }

  if(j==0)
    printf("NONE\n");
  else
  {
    for(i=0;i<j;i++)
      printf("%d %d\n",d[i],p[i]);
  }
}
return 0;
}