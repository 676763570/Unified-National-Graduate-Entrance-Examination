#include <stdio.h>

int d[1001];
int n;

int main()
{
int i,sum,k;
while(scanf("%d",&n)!=EOF&&n)
{
for(i=0;i<n;i++)
  scanf("%d",&d[i]);
scanf("%d",&k);
sum=0;
for(i=0;i<n;i++)
  if(d[i]==k) sum++;
printf("%d\n",sum);
}
return 0;
}