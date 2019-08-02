#include <stdio.h>
#include <string.h>


int a[120],p[120],p1[30];
int d1[28],d2[28],len1,len2;

void prime()
{
memset(a,0,sizeof(a));
int num=0,i,j;
for(i=2;i<120;i++)
{
 if(!a[i]) p[num++]=i;
 for(j=0;(j<num&&i*p[j]<120);j++)
 {
   a[i*p[j]]=1;
   if(!(i%p[j])) break;
 }
}
 num=0;
for(i=2;i<120;i++)
{
  if(!a[i])  p1[num++]=i;
}
return;
}

void input()
{
int d;
char c;
len1=len2=0;
memset(d1,0,sizeof(d1));
memset(d2,0,sizeof(d2));
while(1)
{
 scanf("%d%c",&d,&c);
 d1[len1++]=d;
 if(c==' ') break;
}
while(1)
{
  scanf("%d%c",&d,&c);
  d2[len2++]=d;
  if(c!=',') break;
}
return;
}

bool zero(int num[],int k)
{
for(int i=0;i<k;i++)
   if(num[i]!=0)  return false;
return true;
}

void swap(int &x,int &y)
{
int t=x;
x=y;y=t;
}

void swert()
{
int i,j;
for(i=0,j=len1-1;i<j;i++,j--)
   swap(d1[i],d1[j]);
for(i=0,j=len2-1;i<j;i++,j--)
   swap(d2[i],d2[j]);
}

void add()
{
int m,i;
m=(len1>len2 ? len1:len2);
for(i=0;i<m;i++)
{
 if(d1[i]+d2[i]>=p1[i])
 {
  d1[i]=d1[i]+d2[i]-p1[i];
  d1[i+1]++;
 }
 else
  d1[i]+=d2[i];
}
for(i=25;i>=0;i--)
   if(d1[i]!=0)  break;

m=i;
for(i=m;i>0;i--)
   printf("%d,",d1[i]);
printf("%d\n",d1[0]);
}


int main()
{
  prime();
  while(1)
  {
   input();
   if(zero(d1,len1)&&zero(d2,len2))  break;
   swert();
   add();
  }
  return 0;
}