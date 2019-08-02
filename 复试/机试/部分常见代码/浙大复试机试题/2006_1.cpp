#include <stdio.h>
#include <string.h>

int a,b,n1[10],n2[10],k;

int main()
{
int i,sum,f;
while(scanf("%d %d %d",&a,&b,&k)&&(a&&b))
{
memset(n1,0,sizeof(n2));
memset(n2,0,sizeof(n2));
i=0;
sum=a+b;
while(a)
{
n1[i]=a%10;
a=a/10;
i++;
}
i=0;
while(b)
{
n2[i]=b%10;
b=b/10;
i++;
}
f=0;
for(i=0;i<k;i++)
{
 if(n1[i]!=n2[i])
   {
   f=1;
   break;
   }
}
if(!f)
   printf("-1\n");
else
   printf("%d\n",sum);
}
return 0;
}