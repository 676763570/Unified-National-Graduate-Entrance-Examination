#include <stdio.h>
#include <string.h>
char d[105];
int m;

int Find()
{
int i,j,n;
char d1[105];
n=m/2;
for(i=0;i<m;i++)
{
  memset(d1,0,sizeof(d1));
  for(j=i;j<m;j++) d1[j-i]=d[j];
  for(j=0;j<i;j++) d1[m+j-i]=d[j];
  for(j=0;j<n;j++)
    if(d1[j]!=d1[m-j-1]) break;
  if(j==n)  return (i+n)%m;
}
return -1;
}

int main()
{
int f;
while(scanf("%s",d)!=EOF&&strcmp(d,"#"))
{
m=strlen(d);
f=Find();
if(f==-1)
   printf("NO\n");
else
   printf("YES %d\n",f);
} 
return 0;
}