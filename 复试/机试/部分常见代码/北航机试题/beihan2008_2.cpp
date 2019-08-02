#include <stdio.h>
#include <string.h>

int a[10][10],b[10][10],t[10][10];
int n;
void Find(int k)
{
int i,j;
if(k==0)
{
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        t[i][j]=a[i][j];
}
else if(k==1)
{
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        t[j][n-1-i]=a[i][j];
}
else if(k==2)
{
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       t[n-1-i][n-1-j]=a[i][j];
}
else
{
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        t[n-1-j][i]=a[i][j];
}
return;
}
int main()
{

int i,j,c,f;
while(scanf("%d",&n)!=EOF)
{
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
   for(c=0;c<4;c++)
   {
     f=0;
     Find(c);
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           if(t[i][j]!=b[i][j]) {f=1;break;}
     if(!f)  {printf("%d\n",90*c);break;}
   }
   if(c==4)
      printf("-1\n");
}
return 0;
}