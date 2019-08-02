#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Rn(int n)
{
  if((n%4==0&&n%100!=0)||n%400==0)
    return 1;
  else
    return 0;
}

int main()
{
int y,m,d,i;
int r[]={31,29,31,30,31,30,31,31,30,31,30,31};
int p[]={31,28,31,30,31,30,31,31,30,31,30,31};
int *a;
while(scanf("%d %d",&y,&d)!=EOF)
{
   if(Rn(y))
      a=r;
   else
      a=p;
   m=1;
   for(i=0;i<12;i++)
   {
      if(d>a[i])  d=d-a[i],m++;
      else  break;
   }
      printf("%04d-%02d-%02d\n",y,m,d);
}
return 0;
}