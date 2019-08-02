#include <stdio.h>

double m,n;
double k1,k2;

int main()
{
  double m1;
  scanf("%lf:%lf",&m,&n);
  m1=m-n/60.0;
  if(m1>=12)
     m1=m1-12;
  k1=360.0*(m1/12.0);
  k2=360.0*(n/60.0);
  if(k1>k2)
     printf("%.3lf\n",k1-k2);
  else
     printf("%.3lf\n",k2-k1);
  return 0;
}