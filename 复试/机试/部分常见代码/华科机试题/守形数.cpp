#include <stdio.h>
#include <string.h>

int Issx(int n)
{
int s,i;
s=n*n;
i=1;
while(n)
{
  if(n%10!=s%10)
    { i=0; break;}
  else
    n=n/10,s=s/10;
}
return i;
}

int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
  if(Issx(n))
      printf("Yes!\n");
  else
      printf("No!\n");
}
return 0;
}