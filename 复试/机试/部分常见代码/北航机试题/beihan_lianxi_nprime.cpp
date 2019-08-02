/*#include <stdio.h>
#include <string.h>
#define N 1000000

int d[N],p[N],ans[N];

void prime()
{
int i,j,num;
num=0;
memset(d,0,sizeof(d));
for(i=2;i<N;i++)
{
 if(!d[i]) p[num++]=i;
 for(j=0;(j<num&&i*p[j]<N);j++)
 {
  d[i*p[j]]=1;
  if(i%p[j]==0) break;
 }
}
return 0;
}

int main()
{
int n,i,m;
scanf("%d",&n);
m=1;
for(i=0;i<n;i++)
  m=m*10;
for(i=m/10;i<m;i++)
{
  if(!d[i])
  {
     for()
  }
}
}*/
#include <stdio.h>
#define MAX1 10000
#define MAX2 2500

int isPrime(long number);
void search(long temp,int p);
long prime[MAX2],primeAmount=0,num[MAX1];
int first[5]={2,3,5,7},unFirst[4]={1,3,7,9};
int n;

int main()
{
	int i,j;
	long temp;

	scanf("%d",&n);
	
	//建立素数表
	for(i=0;i<MAX1;i++) num[i]=i+2;
	for(i=0;i<MAX1;i++)
	{
		if(num[i]!=1) temp=num[i];
		for(j=i+1;j<MAX1;j++)
		{
			if(num[j]%temp==0) num[j]=1;
		}
	}
	j=0;
	for(i=0;i<MAX2;i++)
	{
		while((num[j]==1)&&(j<MAX1)) j++;
		if(j<MAX1) prime[i]=num[j++];
		else break;
	}
 printf("%d ",i);
	primeAmount=i;

	//搜索
	temp=0;
	for(i=0;i<4;i++)
	{
		temp=first[i];	
		search(temp,2);
	}
 return 0;
}

int isPrime(long number)
{
	int i;
	for(i=0;i<primeAmount;i++)
	{
		if((number%prime[i]==0)&&(number!=prime[i])) return 0;
	}
	return 1;
}

void search(long temp,int p)
{
	int i;

	if(p==n+1) 
	{
		printf("%d\n",temp);
	}
	else
	{
		for(i=0;i<4;i++)
		{
			if(isPrime(temp*10+unFirst[i])) search(temp*10+unFirst[i],p+1);
		}
	}
}