#include <stdio.h>
#include <string.h>

double q,maxx;
int n,k;
double d[31];
void Find(int t,double money,double remain)
{
if(t>=k)
 {
 if(money>maxx) maxx=money;
 return; 
 }
if(money+d[t]<=q&&money+remain>maxx)
    Find(t+1,money+d[t],remain-d[t]);
if(money+remain-d[t]>maxx)
    Find(t+1,money,remain-d[t]);
}

int main()
{
//freopen("E:\\C++\\input.txt","r",stdin);
//freopen("E:\\C++\\output.txt","w",stdout);
int m,i,j;
bool lab;
double x,tot;
double abc[3];
char ch;
while(scanf("%lf %d",&q,&n)!=EOF&&n)
{
k=0;
for(i=0;i<n;i++)
{
scanf("%d",&m);
abc[0]=abc[1]=abc[2]=0;
lab=true;
tot=0;
for(j=0;j<m;j++)
{
  scanf(" %c:%lf",&ch,&x);
  if(ch=='A') abc[0]+=x;
  else if(ch=='B') abc[1]+=x;
  else if(ch=='C') abc[2]+=x;
  else lab=false;
  if(x>600.0)
     lab=false;
  tot+=x;       
}
if(tot>1000||abc[0]>600||abc[1]>600||abc[2]>600)
    lab=false;
if(lab)
   d[k++]=tot;  
}
maxx=0;
double remain=0;
for(i=0;i<k;i++) remain+=d[i];
Find(0,0,remain);
printf("%.2lf\n",maxx);

}
//fclose(stdin);
//fclose(stdout);
return 0;
}