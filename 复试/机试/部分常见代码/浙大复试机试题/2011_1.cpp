#include <stdio.h>

int n,m;
int a[11][11];
int main()
{
int i,j,s,f;
while(scanf("%d",&n)!=EOF&&n)
{
scanf("%d",&m);
for(i=0;i<n;i++)
   for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
   for(j=0;j<m;j++)
   {
     scanf("%d",&s);
     a[i][j]=a[i][j]+s;
   }
s=0;
for(i=0;i<n;i++)
{
 f=0;
 for(j=0;j<m;j++)
    if(a[i][j]!=0) {f=1;break;}
 if(!f) 
    s++;
}
for(j=0;j<m;j++)
{
 f=0;
 for(i=0;i<n;i++)
    if(a[i][j]!=0) {f=1;break;}
 if(!f)
   s++;
}
printf("%d\n",s);
}
return 0;
}