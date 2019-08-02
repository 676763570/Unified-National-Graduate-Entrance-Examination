#include <stdio.h>

int p,t,g1,g2,g3,gj;

int Find(int a,int b)
{
if(a>b)  return a-b;
else     return b-a;
}

int maxx(int a,int b,int c)
{
int t;
t=a;
if(t<b) t=b;
if(t<c) t=c;
return t;
}

int main()
{
double s;
while(scanf("%d %d %d %d %d %d",&p,&t,&g1,&g2,&g3,&gj)!=EOF)
{
if(Find(g1,g2)<=t)
     s=(g1+g2)/2.0;
else if(Find(g1,g3)<=t&&Find(g2,g3)<=t)
     s=double(maxx(g1,g2,g3));
else if(Find(g1,g3)<=t||Find(g2,g3)<=t)
     {
     if(Find(g1,g3)<=t)
        s=(g1+g3)/2.0;
     if(Find(g2,g3)<=t)
        s=(g2+g3)/2.0;
     }
else s=gj*1.0;
printf("%.1f\n",s);
}
return 0;
}