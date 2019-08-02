#include <stdio.h>

int n;

void Find()
{
int k;
k=0;
while(n!=1)
{
if(n%2==0)
{
  n=n/2;
  k++;
}
else
{
n=(n*3+1)/2;
k++;
}
}
printf("%d\n",k);
return;
}

int main()
{
while(scanf("%d",&n)!=EOF&&n)
    Find();
return 0;
}
