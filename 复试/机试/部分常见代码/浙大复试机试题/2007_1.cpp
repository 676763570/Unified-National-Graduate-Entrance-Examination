#include <stdio.h>

int lx,ly,hx,hy;

int main()
{
int x,y;
while(scanf("%d %d",&x,&y)!=EOF&&(x||y))
{
lx=hx=x;
ly=hy=y;
while(scanf("%d %d",&x,&y)&&(x||y))
{
if(x>hx)  hx=x;
if(x<lx)  lx=x;
if(y>hy)  hy=y;
if(y<ly)  ly=y;
}
printf("%d %d %d %d\n",lx,ly,hx,hy);
}
return 0;
}