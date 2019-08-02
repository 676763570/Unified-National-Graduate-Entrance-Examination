#include <stdio.h>
#include <math.h>

int n;
double x;

int main()
{
int i;
double sum;
while(scanf("%lf %d",&x,&n)!=EOF)
{
sum=x;
if(n==0)
   printf("%.6lf\n",sum);
else
  {
   for(i=1;i<=n;i++)
     sum=sum*2.0/3.0+x/(3*sum*sum);
   printf("%.6lf\n",sum);
  }
  }
  return 0;
}