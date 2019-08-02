#include <stdio.h>
#include <string.h>

typedef struct  
{
int num,n;
}Node;

Node d[100];

void sort(int k)
{
int i,j,t1,t2;
for(i=0;i<k-1;i++)
  for(j=i+1;j<k;j++)
  {
    if((d[i].n>d[j].n)||(d[i].n==d[j].n&&d[i].num>d[j].num))
      {
         t1=d[i].n;
         t2=d[i].num;
         d[i].n=d[j].n;
         d[i].num=d[j].num;
         d[j].n=t1;
         d[j].num=t2;
      }
  }
  return;
}

int main()
{
int k,i;
while(scanf("%d",&k)!=EOF)
{
for(i=0;i<k;i++)
   scanf("%d %d",&d[i].num,&d[i].n);
sort(k);
for(i=0;i<k;i++)
  printf("%d %d\n",d[i].num,d[i].n);

}
return 0;
}