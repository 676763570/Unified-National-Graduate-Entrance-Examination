#include <stdio.h>

typedef struct  
{
int num;
int h,m;
int time;
int flag;
}Node;

Node d[100];

int main()
{
 freopen("E:\\C++\\input.txt", "r", stdin);
 freopen("E:\\C++\\output.txt", "w", stdout);
int i,n,k,hour,min;
char ch;
k=0;
while(scanf("%d",&n)!=EOF&&n!=-1)
{
 scanf(" %c %d:%d",&ch,&hour,&min);
 if(n==0)
 {
 int q=0,p=0;
 for(i=0;i<k;i++)
    if(d[i].flag==2) {p=p+d[i].time;q++;}

 if(q==0||p==0)
    printf("0 0\n");
 else
    {
    if(p*1.0/q-p/q>=0.5) p=p/q+1;
    else p=p/q;
    printf("%d %d\n",q,p);
    }
    k=0;
 }
 else 
 {
 if(ch=='S')
    {
    d[k].flag=1;
    d[k].h=hour;
    d[k].m=min;
    d[k].num=n;
    d[k].time=0;
    k++;
    }
 if(ch=='E')
    {
    for(i=0;i<k;i++)
      if(d[i].num==n&&d[i].flag==1)
      {
      d[i].flag=2;
      d[i].time=(hour*60+min)-((d[i].h)*60+d[i].m);
      }
    }    
}
}
fclose(stdin);
fclose(stdout);
return 0;
}
